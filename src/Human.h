/* 
 * File:   Human.h
 * Author: Filip Sergot
 *
 * Created on January 26, 2014, 3:48 PM
 */

#ifndef HUMAN_H
#define	HUMAN_H

#include "Fighter.h"
#include <iostream>

using namespace std;

class Human : public Fighter {
public:
    Human(int strength, string name, bool retarded);
    virtual ~Human();
    virtual string toString();
private:
    string name;
    bool retarded;
};

#endif	/* HUMAN_H */

