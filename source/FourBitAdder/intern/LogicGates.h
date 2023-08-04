/*
 * LogicGates.h
 *
 *  Created on: Jun 14, 2020
 *      Author: brad
 */

#ifndef _LOGICGATES_H_
#define _LOGICGATES_H_

#include <string>
#include "../../FourBitAdder/intern/AbstractGate.h"

class AND: public AbstractGate
{
public:
    /**
     * Constructor for concrete class AND.
     */
     AND();

    AND(const unsigned short int);
    virtual ~AND();

public:
    std::string m_strID;

    virtual void update();
    virtual std::string repr();
};

class NAND: public AbstractGate
{
public:
    NAND(const unsigned short int);
    virtual ~NAND();

public:
    std::string m_strID;

    virtual void update();
    virtual std::string repr();
};

class OR: public AbstractGate
{
public:
    OR();
    OR(const unsigned short int);
    virtual ~OR();

public:
    std::string m_strID;

    virtual void update();
    virtual std::string repr();
};
class XOR : public AbstractGate
{
public:
    XOR();    
    XOR(const unsigned short int);
public:
    std::string m_strID;

    virtual void update();
    virtual std::string repr();

};

#endif /* _LOGICGATES_H_ */
