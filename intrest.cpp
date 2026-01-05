#include <iostream> //just a library thing
#include <cmath>
using namespace std; 
//use all the standard stuff in c++

int main() {
    float coins = 20000;
    float rate = .043;

    float total;

    for(int years = 1; years <=10;years++) {
        total = coins * pow(1+rate,years);
        cout << years <<  "~~  £"<< total << endl;
    }

}