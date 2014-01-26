/* 
 * File:   Arena.h
 * Author: Filip Sergot
 *
 * Created on January 26, 2014, 3:13 PM
 */

#ifndef ARENA_H
#define	ARENA_H

#include <vector>

template <class T>
class Arena {
public:
    Arena();
    virtual ~Arena();
    
    Arena<T> &operator+=(const T *fighter);
    bool operator -=(T *fighter);
    
    void printFighters();
private:
    std::vector<T> fighters;
};

#endif	/* ARENA_H */