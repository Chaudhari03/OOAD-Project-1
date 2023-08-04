/* add your code */

// FourBitAdder.h

#ifndef FOURBITADDER_H
#define FOURBITADDER_H

#include "LogicGates.h"
#include "FullAdder.h"

class FourBitAdder {
private:
    FullAdder adders[4];

public:
    FourBitAdder();
    void setInput(const unsigned short int inputA[4], const unsigned short int inputB[4]);
    const unsigned short int* getSum();
    const unsigned short int getCarryOut();
};

#endif // FOURBITADDER_H
// Note that you will need intermediate classes as well
// for the half-adder and full-adder circuits.
