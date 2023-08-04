// HalfAdder.cpp

#include "HalfAdder.h"
#include "LogicGates.h"

AND and1(1);
XOR xor1(1);
HalfAdder::HalfAdder() {
    AND and1(1);
    XOR xor1(1);
}

void HalfAdder::setInput(const unsigned short int inputA, const unsigned short int inputB) {
    xor1.set_in1(inputA);
    xor1.set_in2(inputB);
    and1.set_in1(inputA);
    and1.set_in2(inputB);
}

const unsigned short int HalfAdder::getSum() {
    xor1.update();
    return xor1.m_usiOut;
    
}

const unsigned short int HalfAdder::getCarryOut() {
    and1.update();
    return and1.m_usiOut;
}