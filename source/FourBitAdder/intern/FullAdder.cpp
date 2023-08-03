#include "FullAdder.h"
#include "LogicGates.h"

FullAdder::FullAdder() {
}

void FullAdder::setInput( const unsigned short int inputA, const unsigned short int inputB, const unsigned short int inputC) {
    // Set input values for AND and XOR gates
    AND(inputA);
    XOR(inputA);
}

const unsigned short int FullAdder::getSum(const unsigned short int inputA,const unsigned short int inputB, const unsigned short int inputC) {
    // Get the output Sum from XOR gate
      const unsigned short int temp = XOR(inputA).update(inputB)
    return XOR(temp).update(inputC)
      
}
const unsigned short int FullAdder::getCarryOut(const unsigned short int inputA,const unsigned short int inputB, const unsigned short int inputC) {
    // Get the output Sum from XOR gate
     
    const unsigned short int ab_AND = AND(inputA).update(inputB) 
    const unsigned short int bc_AND = AND(inputB).update(inputC)
    const unsigned short int ac_AND = AND(inputA).update(inputC)
return OR(OR(ab_AND).update(bc_AND)).update(ac_AND)


}