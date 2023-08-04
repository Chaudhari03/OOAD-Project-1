#include <gtest/gtest.h>
#include "../../FourBitAdder/intern/HalfAdder.h"

TEST(HalfAdderTest, TestSum)
{
    HalfAdder half_adder;

    half_adder.setInput(0, 0);
    ASSERT_EQ(half_adder.getSum(), 0);

    half_adder.setInput(0, 1);
    ASSERT_EQ(half_adder.getSum(), 1);

    half_adder.setInput(1, 0);
    ASSERT_EQ(half_adder.getSum(), 1);

    half_adder.setInput(1, 1);
    ASSERT_EQ(half_adder.getSum(), 0);
}

TEST(HalfAdderTest, TestCarryOut)
{
    HalfAdder half_adder;

    half_adder.setInput(0, 0);
    ASSERT_EQ(half_adder.getCarryOut(), 0);

    half_adder.setInput(0, 1);
    ASSERT_EQ(half_adder.getCarryOut(), 0);

    half_adder.setInput(1, 0);
    ASSERT_EQ(half_adder.getCarryOut(), 0);

    half_adder.setInput(1, 1);
    ASSERT_EQ(half_adder.getCarryOut(), 1);
}