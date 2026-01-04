#include <iostream> //just a library thing

using namespace std; 
//use all the standard stuff in c++

int main() {
    
    int digimonD;
    int monTotal= 0;
    int monAmount = 0;
    int average = 0;

    cout << "eneter the damage digimon damage or -1 to quit" << endl;

    cin >> digimonD;
    while (digimonD != -1){
        
        monTotal += digimonD;
        monAmount++;
        cin >> digimonD;
    }

    cout << monTotal << " " << monAmount << endl;
    average = monTotal/monAmount;
    cout << "average damage for digimon " << average;

    return 0;

}