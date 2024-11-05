#include "BitArray.h"

static constexpr int BITS_PER_LONG = sizeof(unsigned long) * 8;

int BitArray::wordsNeeded(int num_bits) const {
    if (num_bits < 0) {
        throw std::invalid_argument("Num bits must be non-negative");
    }

    return (BITS_PER_LONG - 1) / (BITS_PER_LONG);
}

std::pair<int, int> BitArray::getPosition(int n) const {
    if (n < 0) {
        throw std::invalid_argument("Num bits must be non-negative");
    }

    int wordIndex = n / (BITS_PER_LONG);
    int bitIndex = n % (BITS_PER_LONG);
    return {wordIndex, bitIndex};
}

BitArray::BitArray() : size_(0) {}

BitArray::BitArray(int num_bits, unsigned long value) : size_(num_bits) {
    if (num_bits < 0) {
        throw std::invalid_argument("Num bits must be non-negative");
    }

    int words = wordsNeeded(num_bits);
    Data.resize(words, 0);

    for (int i = 0; i < num_bits; ++i) {
        if (value & (1UL << i)) {
            set(i, true); 
        }
    }
}

BitArray::BitArray(const BitArray& b) : size_(b.size_), Data(b.Data) {}

BitArray::~BitArray() {}

void BitArray::swap(BitArray& b) {
    std::swap(size_, b.size_);
    std::swap(Data, b.Data);
}

BitArray& BitArray::operator=(const BitArray& b) {
    if (this != &b) {
        size_ = b.size_;
        Data = b.Data;
    }
    return *this;
}

void BitArray::resize(int num_bits, bool value) {
    int old_size = size_;
    int words = wordsNeeded(num_bits);
    Data.resize(words);
    size_ = num_bits;

    if (value && num_bits > old_size) {
        for (int i = old_size; i < num_bits; ++i) {
            set(i, true);
        }
    }
}

void BitArray::clear() {
    size_ = 0;
    Data.clear();
}

void BitArray::push_back(bool bit) {
    resize(size_ + 1, bit);
}

BitArray& BitArray::operator&=(const BitArray& b) {
    if (size_ != b.size_) {
        throw std::invalid_argument("Bit arrays must be of the same size");
    }
    for (int i = 0; i < Data.size(); ++i) {
        Data[i] &= b.Data[i];
    }

    return *this;
}

BitArray& BitArray::operator|=(const BitArray& b) {
    if (size_ != b.size_) {
        throw std::invalid_argument("Bit arrays must be of the same size");
    }

    for (int i = 0; i < Data.size(); ++i) {
        Data[i] |= b.Data[i];
    }

    return *this;
}

BitArray& BitArray::operator^=(const BitArray& b) {
    if (size_ != b.size_) {
        throw std::invalid_argument("Bit arrays must be of the same size");
    }

    for (int i = 0; i < Data.size(); ++i) {
        Data[i] ^= b.Data[i];
    }

    return *this;
}

BitArray& BitArray::operator>>=(int n) {
    if (n < 0) {
        throw std::invalid_argument("Index must be non-negative");
    }

    if (n >= size_) {
        reset();
        return *this;
    }

    for (int i = 0; i < size_ - n; i++) {
        set(i, (*this)[i + n]);
    }

    for (int i = size_ - n; i < size_; i++) {
        reset(i);
    }

    return *this;
}

BitArray & BitArray::operator<<=(int n) {
    if (n < 0) {
        throw std::invalid_argument("Index must be non-negative");
    }

    if (n >= size_) {
        reset();
        return *this;
    }

    for (int i = size_ - 1; i >= n; i--) {
        set(i, (*this)[i - n]);
    }

    for (int i = 0; i < n; i++) {
        reset(i);
    }

    return *this;
}

BitArray BitArray::operator<<(int n) const {
    BitArray result = *this;
    result <<= n;
    return result;
}

BitArray BitArray::operator>>(int n) const {
    BitArray result = *this;
    result >>= n;
    return result;
}

BitArray& BitArray::set(int n, bool val) {
    if (n < 0 || n >= size_) {
        throw std::out_of_range("Index out of range");
    }

    auto [wordIndex, bitIndex] = getPosition(n);
    if (val) {
        Data[wordIndex] |= (1UL << bitIndex);
    } else {
        Data[wordIndex] &= ~(1UL << bitIndex);
    }

    return *this;
}

BitArray& BitArray::set() {
    for (auto& word : Data) {
        word = ~0UL;
    }
    
    return *this;
}

BitArray& BitArray::reset(int n) {
    return set(n, false);
}

BitArray& BitArray::reset() {
    for (auto& word : Data) {
        word = 0;
    }

    return *this;
}

bool BitArray::any() const {
    for (const auto& word : Data) {
        if (word != 0) return true;
    }

    return false;
}

bool BitArray::none() const {
    return !any();
}

BitArray BitArray::operator~() const {
    BitArray result = *this;
    for (auto& word : result.Data) {
        word = ~word;
    }

    return result;
}

int BitArray::count() const {
    int cnt = 0;
    for (const auto& word : Data) {
        unsigned long long temp = word; 
        while (temp) {
            cnt += temp & 1; 
            temp >>= 1; 
        }
    }

    return cnt;
}

bool BitArray::operator[](int i) const {
    if (i < 0 || i >= size_) {
        throw std::out_of_range("Index out of range");
    }

    auto [wordIndex, bitIndex] = getPosition(i);
    return (Data[wordIndex] & (1UL << bitIndex)) != 0;
}

int BitArray::Size() const {
    return size_;
}

bool BitArray::empty() const {
    return size_ == 0;
}

std::string BitArray::to_string() const {
    std::string result;
    for (int i = 0; i < size_; ++i) {
        result += (*this)[i] ? '1' : '0';
    }

    return result;
}

bool operator==(const BitArray& a, const BitArray& b) {
    return a.Size() == b.Size() && a.Data == b.Data; 
}

bool operator!=(const BitArray& a, const BitArray& b) {
    return !(a == b);
}

BitArray operator&(const BitArray& b1, const BitArray& b2) {
    if (b1.Size() != b2.Size()) {
        throw std::invalid_argument("Bit arrays must be of the same size");
    }

    BitArray result(b1);
    result &= b2;
    return result;
}

BitArray operator|(const BitArray& b1, const BitArray& b2) {
    if (b1.Size() != b2.Size()) {
        throw std::invalid_argument("Bit arrays must be of the same size");
    }

    BitArray result(b1);
    result |= b2;
    return result;
}

BitArray operator^(const BitArray& b1, const BitArray& b2) {
    if (b1.Size() != b2.Size()) {
        throw std::invalid_argument("Bit arrays must be of the same size");
    }

    BitArray result(b1);
    result ^= b2;
    return result;
}

