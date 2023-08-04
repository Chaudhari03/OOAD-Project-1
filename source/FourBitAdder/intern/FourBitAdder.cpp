/* add your code */
// FourBitAdder.cpp

#include "FourBitAdder.h"
#include "LogicGates.h"
#include "FullAdder.h"
/// @brief 
FourBitAdder::FourBitAdder() {
}
/// @brief 
/// @param inputA 
/// @param inputB 
void FourBitAdder::setInput(const unsigned short int inputA[4], const unsigned short int inputB[4]) {
    for (int i = 0; i < 4; ++i) {
        adders[i].setInput(inputA[i], inputB[i], (i > 0) ? adders[i - 1].getCarryOut() : 0);
    }
}

/// @brief 
/// @return 
const unsigned short int* FourBitAdder::getSum() {
    static unsigned short int sum[4];
    for (int i = 0; i < 4; ++i) {
        sum[i] = adders[i].getSum();
    }
    return sum;
}

const unsigned short int FourBitAdder::getCarryOut() {
    return adders[3].getCarryOut();
}
// Note that you will need intermediate classes as well
// for the half-adder and full-adder circuits.
