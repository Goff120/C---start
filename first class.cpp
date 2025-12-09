#include <iostream> //just a library thing

using namespace std; 
//use all the standard stuff in c++

class MikoClass {
    //stuff that is available outside the class 
    public: 
        void food() {
            cout << "miko eats food now" << endl;
        }
};

int main() {
    
    MikoClass object;
    object.food();
    return 0;
}
