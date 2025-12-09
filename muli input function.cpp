#include <iostream> //just a library thing

using namespace std; 
//use all the standard stuff in c++

void miko_number(int num) {
    cout << "miko likes the number " << num << endl;
}

int add_num(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1;
    int num2;
    int sum;

    cout << "enter number :";
    cin >> num1;

    cout << "enter number :";
    cin >> num2;

    sum = add_num(num1,num2);
    miko_number(sum);
    
    return 0;
}