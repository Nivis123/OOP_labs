
#include <iostream>
#include "gtest/gtest.h"
#include "BitArray.h"
#include <type_traits>

using namespace std;

TEST(BitArrayTest, DefaultConstructor) {
    BitArray bits;
    ASSERT_EQ(bits.Size(), 0);
    ASSERT_TRUE(bits.empty());
}

TEST(BitArrayTest, ConstructorWithSize) {
    BitArray bits(10);
    ASSERT_EQ(bits.Size(), 10);
    ASSERT_FALSE(bits.empty());
    ASSERT_EQ(bits.to_string(), "0000000000");
}

TEST(BitArrayConstructorTest, ValidInitialization) {
    BitArray ba(5, 0b10101);
    ASSERT_EQ(ba.Size(), 5);
    ASSERT_EQ(ba.to_string(), "10101");
}

TEST(BitArrayConstructorTest, AllBitsSet) {
    BitArray ba(8, 0b11111111);
    ASSERT_EQ(ba.Size(), 8);
    ASSERT_EQ(ba.to_string(), "11111111");
}

TEST(BitArrayConstructorTest, NoBitsSet) {
    BitArray ba(5, 0);
    ASSERT_EQ(ba.Size(), 5);
    ASSERT_EQ(ba.to_string(), "00000");
}


TEST(BitArrayConstructorTest, NegativeBitsThrowsException) {
    ASSERT_THROW(BitArray ba(-1, 0), std::invalid_argument);
}

TEST(BitArrayTest, CopyConstructor) {
    BitArray bits1(10, 1);
    BitArray bits2(bits1);
    ASSERT_EQ(bits1, bits2);
}

TEST(BitArrayTest, SetAndGet) {
    BitArray bits(10);
    bits.set(3);
    ASSERT_TRUE(bits[3]);
    bits.set(3, false);
    ASSERT_FALSE(bits[3]);
}

TEST(BitArrayTest, Resize) {
    BitArray bits(5);
    bits.resize(10);
    ASSERT_EQ(bits.Size(), 10);
    ASSERT_EQ(bits.to_string(), "0000000000");
    bits.resize(3);
    ASSERT_EQ(bits.Size(), 3);
    ASSERT_EQ(bits.to_string(), "000");
}

TEST(BitArrayTest, PushBack) {
    BitArray bits;
    bits.push_back(true);
    bits.push_back(false);
    ASSERT_EQ(bits.to_string(), "10");
}

TEST(BitArrayTest, BitwiseAnd) {
    BitArray bits1(5, 0b11011);
    BitArray bits2(5, 0b10101);
    BitArray result = bits1 & bits2;
    ASSERT_EQ(result.to_string(), "10001");
}

TEST(BitArrayTest, BitwiseOr) {
    BitArray bits1(5, 0b11011);
    BitArray bits2(5, 0b10101);
    BitArray result = bits1 | bits2;
    ASSERT_EQ(result.to_string(), "11111");
}

TEST(BitArrayTest, BitwiseXor) {
    BitArray bits1(5, 0b11011);
    BitArray bits2(5, 0b10101);
    BitArray result = bits1 ^ bits2;
    ASSERT_EQ(result.to_string(), "01110");
}

TEST(BitArrayShiftRightTest, ShiftRightByZero) {
    BitArray ba(5, 0b10101); 
    ASSERT_EQ(ba.to_string(), "10101"); 
}


TEST(BitArrayShiftRightTest, ShiftRightNegative) {
    BitArray ba(5, 0b10101);
    ASSERT_THROW(ba >>= -1, std::invalid_argument); 
}

TEST(BitArrayShiftLeftTest, ShiftLeftByZero) {
    BitArray ba(5, 0b10101); 
    ASSERT_EQ(ba.to_string(), "10101"); 
}

TEST(BitArrayShiftLeftTest, ShiftLeftNegative) {
    BitArray ba(5, 0b10101); 
    ASSERT_THROW(ba <<= -1, std::invalid_argument); 
}

TEST(BitArrayTest, SetAll) {
    BitArray bits(5);
    bits.set();
    ASSERT_EQ(bits.to_string(), "11111");
}

TEST(BitArrayTest, ResetAll) {
    BitArray bits(5, 0b11111);
    bits.reset();
    ASSERT_EQ(bits.to_string(), "00000");
}

TEST(BitArrayTest, Count) {
    BitArray bits(10, 0b1010101010);
    ASSERT_EQ(bits.count(), 5);
}

TEST(BitArrayTest, AnyAndNone) {
    BitArray bits1(5, 0b00000);
    ASSERT_TRUE(bits1.none());
    ASSERT_FALSE(bits1.any());

    BitArray bits2(5, 0b00001);
    ASSERT_FALSE(bits2.none());
    ASSERT_TRUE(bits2.any());
}

TEST(BitArrayTest, OutOfRangeAccess) {
    BitArray bits(5);
    ASSERT_THROW(bits[5], std::out_of_range);
    ASSERT_THROW(bits.set(5), std::out_of_range);
    ASSERT_THROW(bits.reset(5), std::out_of_range);
}

TEST(BitArrayTest, InvalidArgumentOnNegativeSize) {
    ASSERT_THROW(BitArray bits(-1), std::invalid_argument);
}

TEST(BitArrayTest, InvalidArgumentOnNegativeShift) {
    BitArray bits(5);
    ASSERT_THROW(bits <<= -1, std::invalid_argument);
    ASSERT_THROW(bits >>= -1, std::invalid_argument);
}
TEST(emapleTest, test1)
{
    ASSERT_EQ(1,1);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

