#include <iostream> //just a library thing

using namespace std; 
//use all the standard stuff in c++

void miko_number(int num) {
    cout << "miko likes the number " << num << endl;
}

int main() {
    int num;

    cout << "enter number :";

    cin >> num;
    miko_number(num);
    return 0;
}