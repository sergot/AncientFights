/* 
 * File:   Human.cpp
 * Author: Filip Sergot
 * 
 * Created on January 26, 2014, 3:48 PM
 */

#include "Human.h"

#include <cstdio>

Human::Human(int strength, string name, bool retarded) : Fighter::Fighter(strength) {
    this->name = name;
    this->retarded = retarded;
}

Human::~Human() {
}

string Human::toString() {
    char res[100];
    const char *a = Fighter::toString().c_str();
    snprintf(res, 100, "%s[name=%s][retarded=%d]", a, name.c_str(), retarded);
    
    return res;
}