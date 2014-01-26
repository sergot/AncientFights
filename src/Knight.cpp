/* 
 * File:   Knight.cpp
 * Author: user
 * 
 * Created on January 26, 2014, 3:48 PM
 */

#include "Knight.h"

#include <iostream>
#include <cstdio>

Knight::Knight(int strength, string name, bool retarded, int swordAttack) : Human::Human(strength, name, retarded) {
    this->swordAttack = swordAttack;
}

Knight::~Knight() {
}

string Knight::toString() {
    char res[100];
    const char *a = Human::toString().c_str();
    snprintf(res, 100, "%s[attack=%d]", a, swordAttack);
    
    return res;
}