#ifndef BITARRAY_H
#define BITARRAY_H

#include <vector>
#include <string>
#include <stdexcept>
#include <utility>

/**
 * @class BitArray
 * @brief A class that represents a dynamic array of bits.
 *
 * This class provides methods for manipulating bits, including setting, resetting,
 * shifting, and performing bitwise operations.
 */
class BitArray {
private:
    int Size;
    std::vector<unsigned long> Data; ///< Internal storage for the bits.
     ///< The total number of bits in the BitArray.

    /**
     * @brief Calculates the number of unsigned long words needed to store the given number of bits.
     * @param num_bits The number of bits.
     * @return The number of words needed.
     */
    int wordsNeeded(int num_bits) const;

    /**
     * @brief Gets the position (word index and bit index) of a given bit.
     * @param n The index of the bit.
     * @return A pair containing the word index and the bit index.
     */
    std::pair<int, int> getPosition(int n) const;

public:
    /**
     * @brief Default constructor that initializes an empty BitArray.
     */
    BitArray();

    /**
     * @brief Constructs a BitArray of a specified size, initialized to a given value.
     * @param num_bits The number of bits in the BitArray.
     * @param value The initial value for the bits (default is 0).
     */
    explicit BitArray(int num_bits, unsigned long value=0);

    /**
     * @brief Copy constructor that creates a new BitArray as a copy of another.
     * @param b The BitArray to copy from.
     */
    BitArray(const BitArray& b);

    /**
     * @brief Destructor that cleans up the BitArray.
     */
    ~BitArray();

    /**
     * @brief Swaps the contents of this BitArray with another.
     * @param b The BitArray to swap with.
     */
    void swap(BitArray& b);

    /**
     * @brief Assignment operator that assigns the contents of another BitArray to this one.
     * @param b The BitArray to assign from.
     * @return A reference to this BitArray.
     */
    BitArray& operator=(const BitArray& b);

    /**
     * @brief Resizes the BitArray to a new size, optionally initializing new bits to a given value.
     * @param num_bits The new size of the BitArray.
     * @param value The value to initialize new bits to (default is false).
     */
    void resize(int num_bits, bool value = false);

    /**
     * @brief Clears the BitArray, setting its size to zero.
     */
    void clear();

    /**
     * @brief Adds a new bit to the end of the BitArray.
     * @param bit The bit to add (true for 1, false for 0).
     */
    void push_back(bool bit);

    /**
     * @brief Performs a bitwise AND operation with another BitArray.
     * @param b The BitArray to AND with.
     * @return A reference to this BitArray.
     */
    BitArray& operator&=(const BitArray& b);

    /**
     * @brief Performs a bitwise OR operation with another BitArray.
     * @param b The BitArray to OR with.
     * @return A reference to this BitArray.
     */
    BitArray& operator|=(const BitArray& b);

    /**
     * @brief Performs a bitwise XOR operation with another BitArray.
     * @param b The BitArray to XOR with.
     * @return A reference to this BitArray.
     */
    BitArray& operator^=(const BitArray& b);

    /**
     * @brief Performs a left shift operation on the BitArray.
     * @param n The number of bits to shift left.
     * @return A reference to this BitArray.
     */
    BitArray& operator<<=(int n);

    /**
     * @brief Performs a right shift operation on the BitArray.
     * @param n The number of bits to shift right.
     * @return A reference to this BitArray.
     */
    BitArray& operator>>=(int n);

    /**
     * @brief Returns a new BitArray that is a left-shifted copy of this BitArray.
     * @param n The number of bits to shift left.
     * @return A new BitArray.
     */
    BitArray operator<<(int n) const;

    /**
     * @brief Returns a new BitArray that is a right-shifted copy of this BitArray.
     * @param n The number of bits to shift right.
     * @return A new BitArray.
     */
    BitArray operator>>(int n) const;

    /**
     * @brief Sets the value of a specific bit.
     * @param n The index of the bit to set.
     * @param val The value to set (default is true).
     * @return A reference to this BitArray.
     */
    BitArray& set(int n, bool val = true);

    /**
     * @brief Sets all bits in the BitArray to true (1).
     * @return A reference to this BitArray.
     */
    BitArray& set();

    /**
     * @brief Resets a specific bit to false (0).
     * @param n The index of the bit to reset.
     * @return A reference to this BitArray.
     */
    BitArray& reset(int n);

    /**
     * @brief Resets all bits in the BitArray to false (0).
     * @return A reference to this BitArray.
     */
    BitArray& reset();

    /**
     * @brief Checks if any bits in the BitArray are set to true (1).
     * @return True if at least one bit is set, false otherwise.
     */
    bool any() const;

    /**
     * @brief Checks if all bits in the BitArray are set to false (0).
     * @return True if all bits are unset, false otherwise.
     */
    bool none() const;

    /**
     * @brief Returns a new BitArray that is the bitwise NOT of this BitArray.
     * @return A new BitArray.
     */
    BitArray operator~() const;

    /**
     * @brief Counts the number of bits set to true (1) in the BitArray.
     * @return The count of bits set to true.
     */
    int count() const;

    /**
     * @brief Accesses the value of a specific bit.
     * @param i The index of the bit.
     * @return The value of the bit (true for 1, false for 0).
     */
    bool operator[](int i) const;

    /**
     * @brief Returns the total number of bits in the BitArray.
     * @return The size of the BitArray.
     */
    int size() const;

    /**
     * @brief Checks if the BitArray is empty (size is 0).
     * @return True if the BitArray is empty, false otherwise.
     */
    bool empty() const;

    /**
     * @brief Converts the BitArray to a string representation of bits (e.g., "10101").
     * @return A string representing the bits in the BitArray.
     */
    std::string to_string() const;
};

/**
 * @brief Compares two BitArrays for equality.
 * @param a The first BitArray.
 * @param b The second BitArray.
 * @return True if the BitArrays are equal, false otherwise.
 */
bool operator==(const BitArray& a, const BitArray& b);

/**
 * @brief Compares two BitArrays for inequality.
 * @param a The first BitArray.
 * @param b The second BitArray.
 * @return True if the BitArrays are not equal, false otherwise.
 */
bool operator!=(const BitArray& a, const BitArray& b);

/**
 * @brief Performs a bitwise AND operation between two BitArrays.
 * @param b1 The first BitArray.
 * @param b2 The second BitArray.
 * @return A new BitArray that is the result of the AND operation.
 */
BitArray operator&(const BitArray& b1, const BitArray& b2);

/**
 * @brief Performs a bitwise OR operation between two BitArrays.
 * @param b1 The first BitArray.
 * @param b2 The second BitArray.
 * @return A new BitArray that is the result of the OR operation.
 */
BitArray operator|(const BitArray& b1, const BitArray& b2);

/**
 * @brief Performs a bitwise XOR operation between two BitArrays.
 * @param b1 The first BitArray.
 * @param b2 The second BitArray.
 * @return A new BitArray that is the result of the XOR operation.
 */
BitArray operator^(const BitArray& b1, const BitArray& b2);

#endif 


