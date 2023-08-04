// FullAdder.h

#ifndef FULLADDER_H
#define FULLADDER_H

#include "../../FourBitAdder/intern/LogicGates.h"
#include "HalfAdder.h"

class FullAdder {
private:
    HalfAdder half_adder1;
    HalfAdder half_adder2;
    OR or_gate;

public:
    FullAdder();
    void setInput(const unsigned short int inputA, const unsigned short int inputB, const unsigned short int inputC);
    const unsigned short int getSum();
    const unsigned short int getCarryOut();
};

#endif // FULLADDER_H