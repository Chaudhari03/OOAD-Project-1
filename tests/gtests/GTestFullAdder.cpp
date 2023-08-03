#include <gtest/gtest.h>
#include "../../FourBitAdder/intern/FullAdder.h"

TEST(FullAdderTest, TestSum)
{
    FullAdder full_adder;

    full_adder.setInput(0, 0, 0);
    EXPECT_EQ(full_adder.getSum(0, 0, 0), 0);

    full_adder.setInput(0, 0, 1);
    EXPECT_EQ(full_adder.getSum(0, 0, 1), 1);

    full_adder.setInput(0, 1, 0);
    EXPECT_EQ(full_adder.getSum(0, 1, 0), 1);

    full_adder.setInput(0, 1, 1);
    EXPECT_EQ(full_adder.getSum(0, 1, 1), 0);


}

TEST(FullAdderTest, TestCarryOut)
{
    FullAdder full_adder;

    full_adder.setInput(0, 0, 0);
    EXPECT_EQ(full_adder.getCarryOut(0, 0, 0), 0);

    full_adder.setInput(0, 0, 1);
    EXPECT_EQ(full_adder.getCarryOut(0, 0, 1), 0);

    full_adder.setInput(0, 1, 0);
    EXPECT_EQ(full_adder.getCarryOut(0, 1, 0), 0);

    full_adder.setInput(0, 1, 1);
    EXPECT_EQ(full_adder.getCarryOut(0, 1, 1), 1);


}