#include <iostream> //just a library thing
#include <string> //let me use strings

using namespace std; 
//use all the standard stuff in c++

class Miko {
    private:
        string food;

    public:
        Miko(string food) {
            change_food(food);
        }

        void change_food(string new_name){
            food = new_name;
        }

        string get_food(){
            return food;
        }

        void print_food(){
            cout << "miko is eating " << get_food() << endl; 
        }
};


int main() {
    Miko miko("apple");
    miko.print_food();
    miko.change_food("pizza");
    miko.print_food();
    Miko brother("shoe");
    brother.print_food();
    miko.print_food();
    return 0;
}