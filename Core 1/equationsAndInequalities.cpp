#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "equationsAndInequalities.h"
using namespace std;


void equationsAndInequalities_3a(){

    cout << "Solving simultaneous equations by elimination." << endl;

    /*
        Question 1
    */
    cout << "Question 3a 1: " << endl;
    cout << "(1) 2x - y = 6" << endl;
    cout << "(2) 4x + 3y = 22" << endl;
    cout << "I am going to try an eliminate y first" << endl;
    cout << "Multiply the first equation by 3 to get -3y" << endl;
    cout << "(1) 6x - 3y = 18" << endl;
    cout << "(2) 4x + 3y = 22" << endl;
    cout << "Now add both equations together " << endl;
    cout << "6x + 4x -3y + 3y = 18 + 22" << endl;
    cout << "10x = 40" << endl;
    cout << "Divide by 10 to get x" << endl;
    cout << "x = 4" << endl;
    cout << "Now use this information to find y" << endl;
    cout << "y = 2x - 6" << endl;
    cout << "y = 2(4) - 6 = 8 - 6" << endl;
    cout << "y = 2 " << endl;
    cout << "So x = 4,  y = 2" << endl;
    cout << "" << endl;
}

void equationsAndInequalities_3b(){
    cout << "Solving these equations by substitution " << endl;

    /*
        Question 1
    */
    cout << "Question 3b 1: " << endl;
    cout << "(1) x + 3y = 11" << endl;
    cout << "(2) 4x - 7y = 6" << endl;
    cout << "We can use substitute by finding an equation for x or y " << endl;
    cout << "In equation (1) x = 11 - 3y" << endl;
    cout << "Now we can substitute every x in equation (2) with this" << endl;
    cout << "(2) 4(11-3y) -7y = 6" << endl;
    cout << "(2) 44 -12y -7y = 6" << endl;
    cout << "(2) 38 = 19y" << endl;
    cout << "(2) y = 38/19 " << endl;
    cout << "(2) y = 2" << endl;
    cout << "Now substitute y = 2 into any equation" << endl;
    cout << "(1) x + 3(y) = 11" << endl;
    cout << "(1) x + 6 = 11" << endl;
    cout << "(1) x = 5" << endl;
    cout << "So x = 5, y = 2" << endl;

}

equationsAndInequalities_3c(){

    cout << "Solving equations with one being linear the other quadratic." << endl;

    /*
        Question 1
    */


}

