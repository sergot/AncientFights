/* 
 * File:   Orc.cpp
 * Author: Filip Sergot
 * 
 * Created on January 26, 2014, 3:49 PM
 */

#include "Orc.h"
#include "Fighter.h"

#include <cstdio>

Orc::Orc(int strength, string voice, bool bothHands) : Fighter::Fighter(strength) {
    this->voice = voice;
    this->bothHands = bothHands;
}

Orc::~Orc() {
}

string Orc::toString() {
    char res[100];
    const char *a = Fighter::toString().c_str();
    snprintf(res, 100, "%s[voice=%s][bothHands=%d]", a, voice.c_str(), bothHands);
    
    return res;
}