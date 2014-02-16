/* 
 * File:   main.cpp
 * Author: Filip Sergot
 *
 * Created on January 26, 2014, 2:52 PM
 */

#include <cstdlib>
#include <iostream>

#include "Arena.cpp"

using namespace std;

int main(int argc, char** argv) {
    srand(time(NULL));
    
    Arena<Fighter *> arena;
    arena.main();
    
    return 0;
}

