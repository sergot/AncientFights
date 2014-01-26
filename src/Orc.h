/* 
 * File:   Orc.h
 * Author: Filip Sergot
 *
 * Created on January 26, 2014, 3:49 PM
 */

#ifndef ORC_H
#define	ORC_H

#include "Fighter.h"

#include <iostream>

using namespace std;

class Orc : public Fighter {
public:
    Orc(int strength, string voice, bool bothHands);
    virtual ~Orc();
    virtual string toString();
private:
    string voice;
    bool bothHands;
};

#endif	/* ORC_H */

