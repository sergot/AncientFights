/* 
 * File:   Spearman.h
 * Author: Filip Sergot
 *
 * Created on January 26, 2014, 3:49 PM
 */

#ifndef SPEARMAN_H
#define	SPEARMAN_H

#include "Orc.h"

class Spearman : public Orc {
public:
    Spearman(int strength, std::string voice, bool bothHands, int spearAttack);
    virtual ~Spearman();
    virtual string toString();
private:
    int spearAttack;
};

#endif	/* SPEARMAN_H */

