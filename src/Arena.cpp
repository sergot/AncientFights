
/* 
 * File:   Arena.h
 * Author: Filip Sergot
 *
 * Created on January 26, 2014, 3:13 PM
 */

#include <vector>
#include <iostream>

#include "Fighter.h"

using namespace std;

template <class T>
class Arena {
public:
    Arena();
    virtual ~Arena();
    
    Arena<T> &operator+=(const T *fighter);
    bool operator -=(T *fighter);
    
    void printFighters();
private:
    vector<T> fighters;
};

template <class T>
Arena<T>::Arena() {
}

template <class T>
Arena<T>::~Arena() {
}

template <class T>
Arena<T> &Arena<T>::operator+=(const T *fighter){
    fighters.push_back(*fighter);
    return *this;
}

template <class T>
bool Arena<T>::operator -=(T *fighter) {
    return true;
}

template <class T>
void Arena<T>::printFighters() {
    typename std::vector<T>::iterator i = fighters.begin();
    for(i; i != fighters.end(); i++) {
        Fighter *f = &(*i);
        cout << f->toString() << endl;
    }
}