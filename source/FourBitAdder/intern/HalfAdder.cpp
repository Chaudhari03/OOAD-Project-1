#include "HalfAdder.h"
#include "LogicGates.h"

HalfAdder::HalfAdder() {
}

void HalfAdder::setInput( const unsigned short int inputA, const unsigned short int inputB) {
    // Set input values for AND and XOR gates
    AND(inputA);
    XOR(inputA);
}

const unsigned short int HalfAdder::getSum(const unsigned short int inputB) {
    // Get the output Sum from XOR gate
     return XOR.update(inputB)
}

const unsigned short int HalfAdder::getCarryOut(const unsigned short int inputB) {
    // Get the Carry-out from AND gate
    return AND.update(inputB);
}