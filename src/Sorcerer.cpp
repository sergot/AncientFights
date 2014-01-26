/* 
 * File:   Sorcerer.cpp
 * Author: user
 * 
 * Created on January 26, 2014, 3:48 PM
 */

#include "Sorcerer.h"

#include <cstdio>

Sorcerer::Sorcerer(int strength, std::string name, bool retarded, int spellAttack) : Human::Human(strength, name, retarded) {
    this->spellAttack = spellAttack;
}

Sorcerer::~Sorcerer() {
}

string Sorcerer::toString() {
    char res[100];
    const char *a = Human::toString().c_str();
    snprintf(res, 100, "%s[attack=%d]", a, spellAttack);
    
    return res;
}