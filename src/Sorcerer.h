/* 
 * File:   Sorcerer.h
 * Author: Filip Sergot
 *
 * Created on January 26, 2014, 3:48 PM
 */

#ifndef SORCERER_H
#define	SORCERER_H

#include "Human.h"

#include <iostream>

class Sorcerer : public Human {
public:
    Sorcerer(int strength, std::string name, bool retarded, int spellAttack);
    virtual ~Sorcerer();
    string toString();
private:
    int spellAttack;
};

#endif	/* SORCERER_H */

