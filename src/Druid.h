/* 
 * File:   Druid.h
 * Author: user
 *
 * Created on January 26, 2014, 3:49 PM
 */

#ifndef DRUID_H
#define	DRUID_H

#include "Human.h"

class Druid : public Human {
public:
    Druid(int strength, string name, bool retarded, int rodAttack);
    virtual ~Druid();
    virtual string toString();
private:
    int rodAttack;
};

#endif	/* DRUID_H */

