
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

    
    // TYPE             // Assignment Operator
         // NAME        
    bool t_or_f = /* Expression that evaluates to true or false*/ true;

    // KEYWORD if (parenthesis enclose expressions)
    if(/*EXPRESSION*/t_or_f) 
    // Consequence, executed if expression is true
    {   // Basic BlocK 
        // Left Brace start block {
        // Right Brace end block {
        cout << boolalpha ;
        cout << "t_or_f: " << t_or_f << endl;
    }
    // If false execution continues after consequnce block(s)

    bool test1 = false;
    bool test2 = false;
    bool test3 = false;

    // Exactly one block will be executed:
    if(test1) {
        // Execute if test1 is true
        // continue after else {}
    } else  {
       // Execute if test1 is false
    } 

    // Exactly one block will be executed:
    if(test1) {
        // Execute if test1 is true
        // continue after last else {}
    } else if (test2) {

    } else if (test3) {

    } else {

    }
    // Always contiue here

    return 0;
}