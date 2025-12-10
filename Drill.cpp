#include <iostream>
#include "Drill.h"
 //just a library thing

using namespace std; 

Drill::Drill(){
    
    cout << "My drill will pierce the heavens!" << endl;
}

void Drill::row(){
    cout << "Row Row fight the power" << endl;
}


void Drill::fight_power(){
    int power = 0;
    while (power < 5){
        power += 1;
        row();
    } 
}