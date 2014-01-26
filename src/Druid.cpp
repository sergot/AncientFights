/* 
 * File:   Druid.cpp
 * Author: user
 * 
 * Created on January 26, 2014, 3:49 PM
 */

#include "Druid.h"

#include <iostream>
#include <cstdio>

Druid::Druid(int strength, string name, bool retarded, int rodAttack) : Human::Human(strength, name, retarded) {
    this->rodAttack = rodAttack;
}

Druid::~Druid() {
}

string Druid::toString() {
    char res[100];
    const char *a = Human::toString().c_str();
    snprintf(res, 100, "%s[attack=%d]", a, rodAttack);
    
    return res;
}