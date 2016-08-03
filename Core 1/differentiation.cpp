#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "differentiation.h"
using namespace std;

void differentiation_7a(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 7a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;


    cout << "[1] F is the point with co-ordinates (3,9) on curve y=x^2 " << endl;
    cout << "\t 1a) Find the gradients of the chords joining points:" << endl;
    cout << "\t i) (4, 16)" << endl;
    cout << "\t Use y2-y1/x2-x1 = 16-9/4-3 = 7/1 = 7" << endl;
    cout << "\t Answer: 7 " << endl << endl;
    getch();

}

void differentiation_7b(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 7b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Find the derived function, given that f(x) equals" << endl;
    cout << "\t [1] x^7 " << endl;
    cout << "\t Let f(x) = x^7" << endl;
    cout << "\t Answer: f'(x) = 7x^6" << endl;
    cout << "\t I did this by multiplying x by the power then subtract 1 to the power" << endl << endl;
    getch();

    cout << "\t [2] x^8 " << endl;
    cout << "\t Let f(x) = x^8" << endl;
    cout << "\t Answer: f'(x) = 8x^7" << endl << endl;
    getch();

    cout << "\t [17] x^2 x x^3 " << endl;
    cout << "\t Let f(x) = x^5 " << endl;
    cout << "\t Answer: f'(x) = 5x^4" << endl << endl;
    getch();

}

void differentiation_7c(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 7c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "[1] Find dy/dx when y equals: " << endl;
    cout << "\t 1a) 2x^2 - 6x + 3" << endl;
    cout << "\t dy/dx = (2)2x^2-1 (1)-6x^1-1 + 3(0)" << endl;
    cout << "\t differentiating a constant gives 0, anything to the power of 0 is 1" << endl;
    cout << "\t answer: dy/dx = 4x - 6" << endl << endl;
    getch();

    cout << "[2] Find the gradient of the curve whose equation is" << endl;
    cout << "\t 2a) y = 3x^2 at point (2,12)" << endl;
    cout << "\t dy/dx = 6x, m = 6x" << endl;
    cout << "\t gradient = 6(2), where x = 2" << endl;
    cout << "\t Answer: 12" << endl << endl;
    getch();

    cout << "[3] Find the y-coordinate and the value of the gradient at P, with x-coordinate 1, on y = 3+2x-x^2" << endl;
    cout << "\t y = 3 + 2x - x^2" << endl;
    cout << "\t dy/dx = 2 - 2x" << endl;
    cout << "\t gradient = 2 - 2(1) = 0" << endl;
    cout << "\t y = 3 + 2(1) - (1)^2 = 3 + 2 - 1 = 4" << endl;
    cout << "\t Answer: y = 4, gradient = 0" << endl << endl;
    getch();

    cout << "[4] Find the co-ordinates of the point on y =x^2 + 5x - 4, where m = 3" << endl;
    cout << "\t dy/dx = 2x + 5" << endl;
    cout << "\t 3 = 2x + 5" << endl;
    cout << "\t 2x = -2" << endl;
    cout << "\t x = -1" << endl;
    cout << "\t sub x = -1, y = (-1)^2 + 5(-1) - 4 = 1 - 5 - 4 = -8" << endl;
    cout << "\t Answer: (-1, -8)" << endl << endl;
    getch();

}

void differentiation_7d(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 7d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    /*
        Question 1a
    */
    cout << "[1] Use standard results to differentiate: " << endl;
    cout << "\t 1a) x^4 + x^-1" << endl;
    cout << "\t Let y = x^4 + x^-1" << endl;
    cout << "\t Answer: dy/dx = 4x^4 -x^-2" << endl << endl;
    getch();

    /*
        Question 1b
    */
    cout << "\t 1b) 1/2x^-2" << endl;
    cout << "\t Let y = 1/2x^-2" << endl;
    cout << "\t Answer: dy/dx = -x^-3" << endl << endl;
    getch();

    /*
        Question 1c
    */
    cout << "\t 1c) 2x^-1/2" << endl;
    cout << "\t Let y = 2x^-1/2" << endl;
    cout << "\t dy/dx = -x^-3/2" << endl << endl;
    getch();


    /*
        Question 2a
    */
    cout << "[2] Find the gradient of the curve with equation y = f(x) at point A where: " << endl;
    cout << "\t 2a) f(x) = x^3 - 3x + 2 and A is at (-1, 4)" << endl;
    cout << "\t f'(x) = 3x^2 - 3" << endl;
    cout << "\t f'(-1) = 3(-1)^2 - 3" << endl;
    cout << "\t f'(-1) = 3 - 3  = 0" << endl;
    cout << "\t Answer: gradient is 0" << endl << endl;
    getch();

    /*
        Question 2b
    */
    cout << "\t 2b) f(x) = 3x^2 + 2x^-1 and A is at (2,13)" << endl;
    cout << "\t f'(x) = 6x + -2x^-2" << endl;
    cout << "\t f'(2) = 6(2) + -2(2)^-2" << endl;
    cout << "\t f'(2) = 12 + -2 (1/4) = 12 - 1/2 = 23/2 or 11.5" << endl << endl;
    getch();

    /*
        Question 3a
    */
    cout << "[3] Find the point or points on the curve with equation y = f(x), where gradient is zero:" << endl;
    cout << "\t 3a) f(x) = x^2 - 5x" << endl;
    cout << "\t f'(x) = 2x - 5" << endl;
    cout << "\t 2x - 5 = 0, 2x = 5, x = 5/2" << endl;
    cout << "\t f(5/2) = (5/2)^2 - 5(5/2) = 25/4 - 25/2 = 25/4 - 50/4 = -25/4 " << endl;
    cout << "\t Point is: (5/2, -25/4)" << endl << endl;
    getch();

    /*
        Question 3b
    */
    cout << "\t 3b) f(x) = x^3 - 9x^2 + 24x - 20" << endl;
    cout << "\t f'(x) = 3x^2 - 18x + 24" << endl;
    cout << "\t 3x^2 - 18x + 24 = 0" << endl;
    cout << "\t x^2 -6x + 8 = 0" << endl;
    cout << "\t (x-2)(x-4) = 0 " << endl;
    cout << "\t x = 2 or x = 4" << endl;
    cout << "\t f(2) = (2)^3 -9(2)^2 + 24(2) - 20 " << endl;
    cout << "\t f(2) = 8 - 36 + 48 - 20 = 0" << endl;
    cout << "\t f(4) = (4)^3 - 9(4)^2 + 24(4) - 20" << endl;
    cout << "\t f(4) = 64 - 144 + 96 - 20 = -40" << endl;
    cout << "\t Answer: (2, 0), (4,-4)" << endl << endl;
    getch();
}

void differentiation_7e(){

}

void differentiation_7f(){

}

void differentiation_7g(){

}

void differentiation_7h(){

}
