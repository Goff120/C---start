#include <iostream> //just a library thing

using namespace std; 
//use all the standard stuff in c++

int main() {
    int x = 1;
    int number;
    int total = 0;

    while (x <= 5){
        cin >> number;
        total += number;
        x++;
    }
    cout << "the total is: " << total << endl;

    return 0;

}