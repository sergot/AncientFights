/* 
 * File:   Warrior.h
 * Author: user
 *
 * Created on January 26, 2014, 3:49 PM
 */

#ifndef WARRIOR_H
#define	WARRIOR_H

#include "Orc.h"

class Warrior : public Orc {
public:
    Warrior(int strength, std::string voice, bool bothHands, int swordAttack);
    virtual ~Warrior();
    virtual string toString();
private:
    int swordAttack;
};

#endif	/* WARRIOR_H */

