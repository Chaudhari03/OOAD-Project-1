#ifndef HALFADDER_H
#define HALFADDER_H

#include "../../FourBitAdder/intern/LogicGates.h"

class HalfAdder {
private:
    AND and_gate; // AND gate instance for calculating Sum
    XOR xor_gate; // XOR gate instance for calculating Carry-out

public:
    HalfAdder(); // Constructor
    void setInput(const unsigned short int inputA, const unsigned short int inputB); // Set input values
    const unsigned short int getSum(const unsigned short int inputB); // Get the output Sum
    const unsigned short int getCarryOut(const unsigned short int inputB); // Get the Carry-out
};

#endif // HALFADDER_H