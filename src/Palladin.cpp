/* 
 * File:   Palladin.cpp
 * Author: Filip Sergot
 * 
 * Created on January 26, 2014, 3:48 PM
 */

#include "Palladin.h"

#include <cstdio>
#include <iostream>

Palladin::Palladin(int strength, std::string name, bool retarded, int bowAttack) : Human::Human(strength, name, retarded) {
    this->bowAttack = bowAttack;
}

Palladin::~Palladin() {
}

string Palladin::toString() {
    char res[100];
    const char *a = Human::toString().c_str();
    snprintf(res, 100, "%s[attack=%d]", a, bowAttack);
    
    return res;
}
