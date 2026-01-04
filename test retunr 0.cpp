#include <iostream> //just a library thing

using namespace std; 
//use all the standard stuff in c++

int main() {
    int x = 10;

    x += 5;
    cout << x <<endl;

    x = 10;

    x -= 5;
    cout << x <<endl;

    x = 10;

    x *= 5;
    cout << x <<endl;

    x = 10;

    x /= 5;
    cout << x <<endl;

    x = 10;

    x %= 3;
    cout << x <<endl;

    x = 10;

    cout << x++ <<endl;
    //still 10 
    cout << x <<endl;
    //now 11
    //run line of code then the ++
    cout << ++x <<endl;
    //this will do ++ first :)

    cout << --x <<endl;
    //also x-- but this is long 
    //this is quite funny 

    //also dont need return in my code :)
}