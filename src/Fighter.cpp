/* 
 * File:   Fighter.cpp
 * Author: Filip Sergot
 * 
 * Created on January 26, 2014, 3:48 PM
 */

#include "Fighter.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>

Fighter::Fighter(int strength) {
    this->strength = strength;
}

Fighter::~Fighter() {
}

std::string Fighter::toString() {
    char res[12];
    snprintf(res, 13, "[strength=%d]", strength);
    
    return res;
}