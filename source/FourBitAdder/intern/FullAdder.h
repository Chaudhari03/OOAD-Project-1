#ifndef FULLADDER_H
#define HALFADDER_H

#include "../../FourBitAdder/intern/LogicGates.h"

class FullAdder {
private:
    AND and_gate; // AND gate instance for calculating Sum
    XOR xor_gate; // XOR gate instance for calculating Carry-out

public:
    FullAdder(); // Constructor
    void setInput(const unsigned short int inputA, const unsigned short int inputB, const unsigned short int inputC); // Set input values
    const unsigned short int getSum(const unsigned short int inputA,const unsigned short int inputB,const unsigned short int inputC); // Get the output Sum
    const unsigned short int getCarryOut(const unsigned short int inputA, const unsigned short int inputB , const unsigned short int inputc); // Get the Carry-out

};

#endif // FULLADDER_H