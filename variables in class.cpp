#include <iostream> //just a library thing
#include <string> //let me use strings

using namespace std; 
//use all the standard stuff in c++

class Miko {
    private:
        string food;

    public:
        void change_name(string new_name){
            food = new_name;
        }

        string get_name(){
            return food;
        }
};


int main() {
    Miko miko;
    miko.change_name("banana");
    cout << "miko is eating " << miko.get_name(); 
    return 0;
}
