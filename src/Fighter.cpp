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

int ID = 0;

Fighter::Fighter(int strength) {
    this->strength = strength;
    this->id = ID++;
}

Fighter::~Fighter() {
}

std::string Fighter::toString() {
    char res[40];
    snprintf(res, 40, "[ID=%d][strength=%d]", id, strength);
    
    return res;
}

Fighter *Fighter::operator+(Fighter *right) {
    if(this->strength > right->strength) {
        this->strength++;
        return right;
    }
    
    right->strength++;
    return this;
}