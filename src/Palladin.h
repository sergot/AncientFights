/* 
 * File:   Palladin.h
 * Author: user
 *
 * Created on January 26, 2014, 3:48 PM
 */

#ifndef PALLADIN_H
#define	PALLADIN_H

#include "Human.h"


class Palladin : public Human {
public:
    Palladin(int strength, std::string name, bool retarded, int bowAttack);
    virtual ~Palladin();
    virtual string toString();
private:
    int bowAttack;
};

#endif	/* PALLADIN_H */

