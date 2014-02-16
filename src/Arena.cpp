
/* 
 * File:   Arena.h
 * Author: Filip Sergot
 *
 * Created on January 26, 2014, 3:13 PM
 */

#include <vector>
#include <iostream>
#include <algorithm>

#include "Fighter.h"
#include "Druid.h"
#include "Knight.h"
#include "Palladin.h"
#include "Sorcerer.h"
#include "Warrior.h"
#include "Spearman.h"

using namespace std;

template <class T>
class Arena {
public:
    Arena();
    virtual ~Arena();
    
    void operator +=(T fighter);
    void operator -=(T fighter);
    
    void printFighters();
    
    int size();
    
    void tournament(); // turniej
    void main();
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
void Arena<T>::operator +=(T fighter){
    fighters.push_back(fighter);
}

template <class T>
void Arena<T>::operator -=(T fighter) {
    for(int i = 0; i < this->fighters.size(); i++) {
        if(this->fighters[i]->id == fighter->id) {
            this->fighters.erase(this->fighters.begin() + i);
            break;
        }
    }
}

template <class T>
void Arena<T>::printFighters() {
    for(int i = 0; i < this->fighters.size(); i++)
        cout << this->fighters[i]->toString() << endl;
}

template <class T>
int Arena<T>::size() {
    return fighters.size();
}

template <class T>
void Arena<T>::tournament() {
    int size = this->fighters.size();
    int i = rand() % size, j = rand() % size;
    
    while(i == j)
        j = rand() % size;
    
    cout << this->fighters[i]->id << " against " << this->fighters[j]->id << endl;
    
    *this -= (*this->fighters[i] + this->fighters[j]);
}

template <class T>
void Arena<T>::main() {
    int strength, attack;
    
    bool isHandicapped;
    string call;
    
    cout << "How many fighters to create? > " << endl;
    
    int howMany;
    cin >> howMany;
    for(int i = 0; i < howMany; i++) {
        int typeOfFighter = (rand() % 6) + 1;
        Fighter *f;

        strength = rand() % 10;
        attack = rand() % 100;
        isHandicapped = rand() % 2 == 1 ? true : false;

        if(typeOfFighter <= 4)
            call = "NAME";
        else
            call = "Augrhhhhh";
        
        if(typeOfFighter == 1) {
            f = new Druid(strength, call, isHandicapped, attack);
        } else if(typeOfFighter == 2) {
            f = new Knight(strength, call, isHandicapped, attack);
        } else if(typeOfFighter == 3) {
            f = new Palladin(strength, call, isHandicapped, attack);
        } else if(typeOfFighter == 4) {
            f = new Sorcerer(strength, call, isHandicapped, attack);
        } else if(typeOfFighter == 5) {
            f = new Warrior(strength, call, isHandicapped, attack);
        } else if(typeOfFighter == 6) {
            f = new Spearman(strength, call, isHandicapped, attack);
        }

        *this += f;
        cout << "[OK]";
        
        cout << endl;
    }
        
    cout << "steady! ready! fight!!" << endl;
    while(this->fighters.size() > 1) {
        this->printFighters();
        
        this->tournament();
        cout << endl << endl;
    }
    
    cout << endl << "... and the winner is........" << endl;
    this->printFighters();
}