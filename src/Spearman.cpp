/* 
 * File:   Spearman.cpp
 * Author: Filip Sergot
 * 
 * Created on January 26, 2014, 3:49 PM
 */

#include "Spearman.h"
#include "Orc.h"

#include <cstdio>

Spearman::Spearman(int strength, std::string voice, bool bothHands, int spearAttack) : Orc::Orc(strength, voice, bothHands) {
    this->spearAttack = spearAttack;
}

Spearman::~Spearman() {
}

string Spearman::toString() {
    char res[100];
    const char *a = Orc::toString().c_str();
    snprintf(res, 100, "%s[attack=%d]", a, spearAttack);
    
    return res;
}
