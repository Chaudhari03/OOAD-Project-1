#include "FourBitAdder.h"
#include "gtest/gtest.h"

// Test cases for the FourBitAdder class
class FourBitAdderTest : public ::testing::Test {
protected:
    FourBitAdder adder;
};

TEST_F(FourBitAdderTest, SumOfZero) {
    unsigned short int inputA[4] = {0, 0, 0, 0};
    unsigned short int inputB[4] = {0, 0, 0, 0};
    adder.setInput(inputA, inputB);
    const unsigned short int* sum = adder.getSum();
    EXPECT_EQ(sum[0], 0);
    EXPECT_EQ(sum[1], 0);
    EXPECT_EQ(sum[2], 0);
    EXPECT_EQ(sum[3], 0);
}

TEST_F(FourBitAdderTest, SumOfOnes) {
    unsigned short int inputA[4] = {1, 1, 1, 1};
    unsigned short int inputB[4] = {1, 1, 1, 1};
    adder.setInput(inputA, inputB);
    const unsigned short int* sum = adder.getSum();
    EXPECT_EQ(sum[0], 0);
    EXPECT_EQ(sum[1], 1);
    EXPECT_EQ(sum[2], 1);
    EXPECT_EQ(sum[3], 1);
}

TEST_F(FourBitAdderTest, SumWithCarryOut) {
    unsigned short int inputA[4] = {1, 1, 1, 1};
    unsigned short int inputB[4] = {1, 1, 1, 1};
    adder.setInput(inputA, inputB);
    const unsigned short int carryOut = adder.getCarryOut();
    EXPECT_EQ(carryOut, 1);
}

TEST_F(FourBitAdderTest, SumWithoutCarryOut) {
    unsigned short int inputA[4] = {1, 1, 1, 0};
    unsigned short int inputB[4] = {1, 1, 0, 0};
    adder.setInput(inputA, inputB);
    const unsigned short int carryOut = adder.getCarryOut();
    EXPECT_EQ(carryOut, 0);
}

// Add more test cases to cover other scenarios...

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
