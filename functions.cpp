#include <iostream> //just a library thing

using namespace std; 
//use all the standard stuff in c++

//could also prototype the function
//seems like it is a proof that fun exist look for that later
void bat(); 

//functions need to be at hight
void miko(){
    cout << "yip yip" << endl;
    bat();
}

int main() {
    bat();
    miko();
    return 0;
}

void bat() {
    cout << "yap yap" << endl;
}
