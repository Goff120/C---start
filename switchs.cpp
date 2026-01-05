#include <iostream> //just a library thing
#include <cmath>
using namespace std; 
//use all the standard stuff in c++

int main() {

    //switch
    int agentRank = 4;

    switch(agentRank){
        case 1:
            cout << "you have rookie digimon" << endl;
            break;
            //end the switch as you found your mark
            //break is just normal python stuff as well ^.^
        case 3:
            cout << "you can have champion digimon" << endl;
            break;
        case 5:
            //idk what higher level are <(＿　＿)>
            //just got into this fandom
            cout << "you can get a higher level of digion" << endl;
            break;
        default:
            cout << "your digimon gets better stats" << endl;
            //this is the end anyway lol
    }
    //helps with not spaming ifelse
}