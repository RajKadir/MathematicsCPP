#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "quadraticFunctions.h"
using namespace std;

void quadraticFunctions_2a(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 2a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    /*
        Question 1
    */
    cout << "Drawing graphs with the following equations, taking values from -4 to +4" << endl;
    cout << "For each graph write down the line of symmetry." << endl;
    cout << "[1] y = x^2 - 3" << endl;
    // Variables for axis printouts
    int x;
    int y;
    for(int i = -4; i <=4; i++){
        cout << "\t X: " << i << " Y: " << equationOne(i, y) << endl;
    }
    cout << "\t The general shape of this equation is a parabola." << endl;
    cout << "\t The minimum value of y is -3 when x is 0" << endl;
    cout << "\t We can see that x = 0 is the line of symmetry" << endl << endl;
    getch();


    /*
        Question 8
    */
    cout << "[8] y = x^2 + 2x - 6" << endl;
    for(int z = -4; z <=4; z++){
        cout << "\t X: " << z << " Y: " << equationEight(z, y) << endl;
    }
    cout << "\t Answer: X = -1 is the line of symmetry." << endl << endl;
    getch();
}
/*
    Returns the y values of question one in 2a
*/
int equationOne(int x, int y){
    return y = x*x - 3;
}
/*
    return the y values of question eight in 2a
*/
int equationEight(int x, int y){
    // Return the y values of (x^2 + 2x - 6)
    return y = x*x + 2*x - 6;
}

void quadraticFunctions_2b(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 2b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    /*
        Question 1
    */
    cout << "Solve the following equations" << endl << endl;

    cout << "[1] x^2 = 4x" << endl;
    cout << "\t Firstly rearrange the equation in the form ax^2 + bx + c = 0" << endl;
    cout << "\t x^2 - 4x + 0 = 0" << endl;
    cout << "\t Where a = 1, b = -4, c = 0" << endl;
    cout << "\t Factorise x^2 - 4x by finding a common factor" << endl;
    cout << "\t The common factor here is x" << endl;
    cout << "\t x(x-4) = 0" << endl;
    cout << "\t Answer: The two solutions of x must be either 4 or 0" << endl << endl;
    getch();

    cout << "\t Checking X= 4, Y = " << equation_2b1(4, 0) << endl;
    cout << "\t Checking X= 0, Y = " << equation_2b1(0, 0) << endl;
    cout << "\t As we can see, we have proven when X=4 or X=0 then y is equal to 0." << endl << endl;
    getch();

    /*
        Question 26
    */
    cout << "[26] Solve: 4x^2 + 17x = 6x - 2x^2" << endl;
    cout << "\t Rearrange: 4x^2 + 17x -6x + 2x^2 = 0" << endl;
    cout << "\t Addition: 6x^2 + 11x = 0" << endl;
    cout << "\t Common Factors?: x" << endl;
    cout << "\t Factorise: x(6x+11) = 0, so x could be 0" << endl;
    cout << "\t 6x + 11 = 0" << endl;
    cout << "\t 6x = - 11" << endl;
    cout << "\t x = -11/6" << endl;
    cout << "\t Answer: x = 0, x = -11/6" << endl << endl;
    getch();
}
/*
    Returns values for the equation 2b1
*/
int equation_2b1(int x, int y){
    return y = x*x - 4*x;
}

void quadraticFunctions_2c(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 2c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;


    cout << "Completing the square expressions" << endl << endl;

    /*
        Question 1
    */
    cout << "[1] x^2 + 4x " << endl;
    cout << "\t (x+2)^2 - 2^2" << endl;
    cout << "\t 2b = 4, b = 2" << endl;
    cout << "\t Answer: (x+2)^2 - 4" << endl << endl;
    getch();

    /*
        Question 12
    */
    cout << "[12] 3x^2 - x" << endl;
    cout << "\t 3(x^2 - 1/3x)" << endl;
    cout << "\t 3[(x-1/6)^2 - 1/36]" << endl;
    cout << "\t 3(x-1/6)^2 - 3/36" << endl;
    cout << "\t 3(x-1/6)^2 - 1/12" << endl << endl;
    getch();
}

void quadraticFunctions_2d(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 2d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;


    cout << "Solving quadratic equations by completing the square leaving answers in surd form where possible. " << endl;
    cout << "Reminder: Where v is a surd symbol." << endl << endl;

    /*
        Question 1
    */
    cout << "[1] x^2 + 6x + 1 = 0" << endl;
    cout << "\t Coefficient of x^2 = 1" << endl;
    cout << "\t Make the LHS in the form of ax^2 + b" << endl;
    cout << "\t x^2 + 6x = -1" << endl;
    cout << "\t Complete the square of: x^2 + 6x" << endl;
    cout << "\t (x+3)^2 - 3^2 = -1" << endl;
    cout << "\t (x+3)^2 = 8" << endl;
    cout << "\t (x+3)=v8" << endl;
    cout << "\t Here v8 can be written as 2v2 since v8 can be written as v4x2 and v4 = 2" << endl;
    cout << "\t x = -3 +2v2" << endl;
    cout << "\t Answer: Solutions to the roots are x = -3+2v2 or x = -3-2v2" << endl << endl;
    getch();

    /*
        Question 10
    */
    cout << "[10] 5x^2 + 8x - 2 = 0" << endl;
    cout << "\t Rearrange to: 5x^2 + 8x = 2" << endl;
    cout << "\t Divide each term by 5: x^2 + 8/5x = 2/5" << endl;
    cout << "\t Complete the square: (x + 4/5)^2 - 4/5^2 = 2/5" << endl;
    cout << "\t Rearrange and add: (x+4/5)^2 = 2/5 + 16/25" << endl;
    cout << "\t Convert 2/5 to /25 by *5 = 10/25 " << endl;
    cout << "\t Add fractions: 10/25 + 16/25 = 26/25" << endl;
    cout << "\t So: (x+4/5)^2 = 26/25" << endl;
    cout << "\t Sqrt both sides: x+4/5 = v26/5" << endl;
    cout << "\t x = -4/5 + v26/5" << endl;
    cout << "\t Answer: x = -4+v26/5 or x = -4-v26/5" << endl << endl;
    getch();
}

void quadraticFunctions_2e(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 2e --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "We can solve quadratics using the formula x = -b+-v(b^2 -4ac)/2a" << endl;
    getch();

    /*
        Question 1
    */

}

void quadraticFunctions_2f(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 2f --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "This section asks for sketches and is done via drawing. " << endl << endl;
    getch();
}


