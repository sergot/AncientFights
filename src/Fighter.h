/* 
 * File:   Fighter.h
 * Author: Filip Sergot
 *
 * Created on January 26, 2014, 3:48 PM
 */

#ifndef FIGHTER_H
#define	FIGHTER_H

#include <iostream>

using namespace std;

class Fighter {
public:
    Fighter(int strength);
    virtual ~Fighter();
    virtual string toString();
protected:
    int strength;
};

#endif	/* FIGHTER_H */

