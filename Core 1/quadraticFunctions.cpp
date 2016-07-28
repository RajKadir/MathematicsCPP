#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "quadraticFunctions.h"
using namespace std;

void quadraticFunctions_2a(){

    /*
        Question 1
    */
    cout << "Drawing graphs with the following equations, taking values from -4 to +4" << endl;
    cout << "For each graph write down the line of symmetry." << endl;
    cout << "y = x^2 - 3" << endl;

    // Variables for axis
    int x;
    int y;

    for(int i = -4; i <=4; i++){
        cout << "X: " << i << " Y: " << equationOne(i, y) << endl;
    }

    cout << "The general shape of this equation is a parabola." << endl;
    cout << "The minimum value of y is -3 when x is 0" << endl;
    cout << "We can see that x = 0 is the line of symmetry" << endl;
    getch();


    /*
        Question 8
    */
    cout << "Question 8: y = x^2 + 2x - 6" << endl;
    for(int z = -4; z <=4; z++){
        cout << "X: " << z << " Y: " << equationEight(z, y) << endl;
    }
    cout << "X = -1 is the line of symmetry." << endl;
}


int equationOne(int x, int y){
    // Return the y values
    return y = x*x - 3;
}

int equationEight(int x, int y){
    // Return the y values of (x^2 + 2x - 6)
    return y = x*x + 2*x - 6;
}


void quadraticFunctions_2b(){

    /*
        Question 1
    */

    cout << "Solve the following equations" << endl;
    cout << "x^2 = 4x" << endl;

    cout << "Firstly rearrange the equation in the form ax^2 + bx + c = 0" << endl;
    cout << "x^2 - 4x + 0 = 0" << endl;
    cout << "Where a = 1, b = -4, c = 0" << endl;
    cout << "Factorise x^2 - 4x by finding a common factor" << endl;
    cout << "The common factor here is x" << endl;
    cout << "x(x-4) = 0" << endl;
    cout << "The two solutions of x must be either 4 or 0" << endl;

    cout << "Checking X= 4, Y = " << equation_2b1(4, 0) << endl;
    cout << "Checking X= 0, Y = " << equation_2b1(0, 0) << endl;
    cout << "As we can see, we have proven when X=4 or X=0 then y is equal to 0." << endl;

    /*
        Question 26
    */

    cout << "Solve: 4x^2 + 17x = 6x - 2x^2" << endl;
    cout << "Rearrange: 4x^2 + 17x -6x + 2x^2 = 0" << endl;
    cout << "Addition: 6x^2 + 11x = 0" << endl;
    cout << "Common Factors?: x" << endl;
    cout << "Factorise: x(6x+11) = 0, so x could be 0" << endl;
    cout << "6x + 11 = 0" << endl;
    cout << "6x = - 11" << endl;
    cout << "x = -11/6" << endl;
    cout << "The solutions are x = 0, x = -11/6" << endl;
}

void quadraticFunctions_2c(){

    cout << "Completing the square expressions" << endl;

    /*
        Question 1
    */
    cout << "Question 1: x^2 + 4x " << endl;
    cout << "(x+2)^2 - 2^2" << endl;
    cout << "2b = 4, b = 2" << endl;
    cout << "answer is : (x+2)^2 - 4" << endl;
    getch();

    /*
        Question 12
    */
    cout << "Question 12: 3x^2 - x" << endl;
    cout << "3(x^2 - 1/3x)" << endl;
    cout << "3[(x-1/6)^2 - 1/36]" << endl;
    cout << "3(x-1/6)^2 - 3/36" << endl;
    cout << "3(x-1/6)^2 - 1/12" << endl;



}

void quadraticFunctions_2d(){

    cout << "Solving quadratic equations by completing the square leaving answers in surd form where possible. " << endl;
    cout << "Where v is a surd symbol." << endl;

    /*
        Question 1
    */
    cout << "x^2 + 6x + 1 = 0" << endl;
    cout << "Coefficient of x^2 = 1" << endl;
    cout << "Make the LHS in the form of ax^2 + b" << endl;
    cout << "x^2 + 6x = -1" << endl;
    cout << "Complete the square of: x^2 + 6x" << endl;
    cout << "(x+3)^2 - 3^2 = -1" << endl;
    cout << "(x+3)^2 = 8" << endl;
    cout << "(x+3)=v8" << endl;
    cout << "Here v8 can be written as 2v2 since v8 can be written as v4x2 and v4 = 2" << endl;
    cout << "x = -3 +2v2" << endl;
    cout << "Solutions to the roots are x = -3+2v2 or x = -3-2v2" << endl;

    getch();
    /*
        Question 10
    */
    cout << "5x^2 + 8x - 2 = 0" << endl;
    cout << "Rearrange to: 5x^2 + 8x = 2" << endl;
    cout << "Divide each term by 5: x^2 + 8/5x = 2/5" << endl;
    cout << "Complete the square: (x + 4/5)^2 - 4/5^2 = 2/5" << endl;
    cout << "Rearrange and add: (x+4/5)^2 = 2/5 + 16/25" << endl;
    cout << "Convert 2/5 to /25 by *5 = 10/25 " << endl;
    cout << "Add fractions: 10/25 + 16/25 = 26/25" << endl;
    cout << "So: (x+4/5)^2 = 26/25" << endl;
    cout << "Sqrt both sides: x+4/5 = v26/5" << endl;
    cout << "x = -4/5 + v26/5" << endl;
    cout << "answer: x = -4+v26/5 or x = -4-v26/5" << endl;
}

int equation_2b1(int x, int y){
    return y = x*x - 4*x;
}
