// HalfAdder.h

#ifndef HALFADDER_H
#define HALFADDER_H

#include "../../FourBitAdder/intern/LogicGates.h"

class HalfAdder {
private:
    XOR xor_gate;
    AND and_gate;

public:
    HalfAdder();
    void setInput(const unsigned short int inputA, const unsigned short int inputB);
    const unsigned short int getSum();
    const unsigned short int getCarryOut();
};

#endif // HALFADDER_H