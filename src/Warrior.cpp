/* 
 * File:   Warrior.cpp
 * Author: user
 * 
 * Created on January 26, 2014, 3:49 PM
 */

#include "Warrior.h"
#include "Orc.h"

#include <cstdio>

Warrior::Warrior(int strength, std::string voice, bool bothHands, int swordAttack) : Orc::Orc(strength, voice, bothHands) {
    this->swordAttack = swordAttack;
}

Warrior::~Warrior() {
}

string Warrior::toString() {
    char res[100];
    const char *a = Orc::toString().c_str();
    snprintf(res, 100, "%s[attack=%d]", a, swordAttack);
    
    return res;
}