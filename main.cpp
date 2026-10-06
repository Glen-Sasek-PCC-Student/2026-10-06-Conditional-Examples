
#include <iostream>

using namespace std;

// Compile run clean
// g++ main.cpp && ./a.out; rm ./a.out
int main() {
    
    if(true) {
        cout << "The expression is true" << endl;
    }

    if(false) {
        cout << "ERROR: The expression is false, containing block{} should not be executed" << endl;
    }

    bool true_or_false; // bool type stores true or false

    true_or_false = true;
    if(true_or_false) {
        cout << "true_or_false is true" << endl;
    }

    true_or_false = false;
    if(true_or_false) {
        cout << "ERROR: true_or_false is false, containing block{} should not be executed" << endl;
    }

    // test for equality double equals ==
    if(9 == 9) {
        cout << "The expression 9 == 9 is true" << endl;
    }

    if(6 == 8) {
        cout << "The expression 6 == 8 is true" << endl;
    } else {
        cout << "The expression 6 == 8 is false" << endl;
    }

    int x = 5;
    int y = 5;

    if(x == y) {
        cout << "The expression " << x << " == " << y << " is true" << endl;
    } else {
        cout << "The expression " << x << " == " << y << " is false" << endl;
    }

    y = 7;
    if(x == y) {
        cout << "The expression " << x << " == " << y << " is true" << endl;
    } else {
        cout << "The expression " << x << " == " << y << " is false" << endl;
    }   
    
    // Common semantic errors single equals is assignment not equality test
    if(x = y) {
        cout << "The expression " << x << " == " << y << " is true" << endl;
    } else {
        cout << "The expression " << x << " == " << y << " is false" << endl;
    } 

    y = 0;
    if(x = y) {
        cout << "The expression " << x << " == " << y << " is true" << endl;
    } else {
        cout << "The expression " << x << " == " << y << " is false" << endl;
    } 



    return 0;
}