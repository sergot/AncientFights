/* 
 * File:   main.cpp
 * Author: Filip Sergot
 *
 * Created on January 26, 2014, 2:52 PM
 */

#include <cstdlib>
#include <iostream>

#include "Fighter.h"
#include "Druid.h"
#include "Knight.h"
#include "Palladin.h"
#include "Sorcerer.h"
#include "Warrior.h"
#include "Spearman.h"
#include "Arena.cpp"

using namespace std;

int main(int argc, char** argv) {
    int typeOfFighter, howManyFighters,
        strength, attack;
    
    bool isHandicapped;
    string call;
    
    srand(time(NULL));
    
    Arena<Fighter> arena;
    
    cout << "Type in 2 numbers per line: <type_of_fighter> <how_many_to_create>" << endl;
    
    cout << "1. Human Druid" << endl << "2. Human Knight" << endl << "3. Human Paladin" << endl << "4. Human Sorcerer" << endl;
    cout << "5. Orc Warrior" << endl << "6. Orc Spearman" << endl;
    
    int i = 0;
    while(i < 1) {
        cout << "> ";
        cin >> typeOfFighter; cin >> howManyFighters;
        cout << "creating...";
        
        if(typeOfFighter >= 1 && typeOfFighter <= 6) {
            for(int j = 0; j < howManyFighters; j++) {
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
                
                arena += f;
            }
            cout << "[OK]";
        } else {
            cout << "[FAIL]" << endl;
            continue;
        }
        
        cout << endl;
        
        i++;
    }
    
    arena.printFighters();
    
    return 0;
}

