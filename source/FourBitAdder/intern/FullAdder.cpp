// FullAdder.cpp

#include "FullAdder.h"
#include "LogicGates.h"
#include "HalfAdder.h"
OR or1(1);
FullAdder::FullAdder() {
}

void FullAdder::setInput(const unsigned short int inputA, const unsigned short int inputB, const unsigned short int inputC) {
    half_adder1.setInput(inputA, inputB);
    half_adder2.setInput(half_adder1.getSum(), inputC);
    or1.set_in1(half_adder1.getCarryOut());
    or1.set_in2(half_adder2.getCarryOut());
}

const unsigned short int FullAdder::getSum() {
    return half_adder2.getSum();
}

const unsigned short int FullAdder::getCarryOut() {
    or1.update();
    return or1.m_usiOut;
}