/* 
 * File:   Knight.h
 * Author: Filip Sergot
 *
 * Created on January 26, 2014, 3:48 PM
 */

#ifndef KNIGHT_H
#define	KNIGHT_H

#include "Human.h"


class Knight : public Human {
public:
    Knight(int strength, std::string name, bool retarded, int swordAttack);
    virtual ~Knight();
    virtual string toString();
private:
    int swordAttack;
};

#endif	/* KNIGHT_H */

