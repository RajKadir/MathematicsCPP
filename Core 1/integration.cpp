#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "integration.h"
using namespace std;

void integration_8a(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 8a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    /*
        Question 1
    */

    cout << "Find an expression for y when dy/dx is the following; " << endl;
    cout << "If dy/dx = kx^n then y = kx^n+1/n+1 + c, n != -1" << endl;
    cout << "[1] x^5" << endl;
    cout << "\t x^6/6 + c" << endl;
    cout << "\t Answer: y = 1/6x^6 + c" << endl << endl;
    getch();

    cout << "[2] 10x^4" << endl;
    cout << "\t 10x^5/5 + c " << endl;
    cout << "\t Answer: y = 2x^5 + c" << endl;
}

void integration_8b(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 8b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    /*
        Question 1
    */
    cout << "[1] Find y when dy/dx is given by the following expression" << endl;
    cout << "\t 1a) dy/dx = 4x - x^-2 + 6x^1/2" << endl;
    cout << "\t y = (4x^2)/2 -(x^-1)/-1 + (6x^3/2)/3/2 + c" << endl;
    cout << "\t Answer: y = 2x^2 + x^-1 + 4x^3/2 + c" << endl << endl;
    getch();


    cout << "\t 1b) dy/dx = 15x^2 + 6x^-3 - 3x^-5/2" << endl;
    cout << "\t y = (15x^3)/3 + (6x^-2)/2 -(3x^-3/2)/-3/2" << endl;
    cout << "\t Answer: y = 5x^3 + 3x^-2 + 2x^-3/2 + c" << endl << endl;
    getch();

    cout << "\t 1c) dy/dx = x^3 - 3/2x^-1/2 -6x^-2" << endl;
    cout << "\t y = (x^4)/4 -(3/2x^1/2)/1/2 -(6x^-1)/-1 + c" << endl;
    cout << "\t Answer: y = 1/4x^4 -3x^1/2 + 6x^-1 + c" << endl << endl;
    getch();


    /*
        Question 2
    */
    cout << "[2] Find f(x) when f'(x) is given by the following expressions." << endl;
    cout << "\t 2a) f'(x) = 12x + 3/2x^-3/2 + 5" << endl;
    cout << "\t f(x) = (12x^2)/2 + (3/2x^-1/2)/-1/2 + 5x + c" << endl;
    cout << "\t Answer: f(x) = 6x^2 - 3x^-1/2 + 5x + c" << endl << endl;
    getch();

    cout << "\t 2b) f'(x) = 6x^5 + 6x^-7 - 1/6x^-7/6" << endl;
    cout << "\t f(x) = (6x^6)/6 + (6x^-6)/-6 -(1/6x^-1/6)/-1/6 + c" << endl;
    cout << "\t Answer: f(x) = x^6 -x^-6 + x^-1/6 + c" << endl << endl;
    getch();

    cout << "\t 2c) f'(x) = 1/2x^-1/2 - 1/2x^-3/2" << endl;
    cout << "\t f(x) = (1/2x^1/2)/1/2 -(1/2x^-1/2)-1/2 + c" << endl;
    cout << "\t Answer: f(x) = x^1/2 + x^-1/2 + c" << endl << endl;
    getch();

    cout << "\t 2h) f'(x) = -2x^-3 -2x + 2x^1/2" << endl;
    cout << "\t f(x) = -(2x^-2)/-2 -(2x^2)/2 + (2x^3/2)/3/2 + c" << endl;
    cout << "\t Answer: f(x) = x^-2 - x^2 + 2x^3/2 + c" << endl << endl;
    getch();


}

void integration_8c(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 8c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Find the following integrals where S is used instead of the integral sign." << endl;

    cout << "[1] S(x^3+2x)dx " << endl;
    cout << "\t = (x^4)/4 + (2x^2)/2 + c" << endl;
    cout << "\t = 1/4x^4 + x^2 + c" << endl << endl;
    getch();

    cout << "[2] S(2x^-2 + 3)dx" << endl;
    cout << "\t = (2x^-1)/-1 + 3x + c" << endl;
    cout << "\t = -2x^-1 + 3x + c" << endl << endl;
    getch();

    cout << "[3] S(5x^3/2 - 3x^2)dx " << endl;
    cout << "\t = (5x^5/2)/5/2 - (3x^3)/3 + c" << endl;
    cout << "\t 2x^5/2 -x^3 + c" << endl << endl;
    getch();

    cout << "[9] S(px^4 + 2t + 3x^-2)dx - with respect to x" << endl;
    cout << "\t Treat p as a constant here." << endl;
    cout << "\t = (px^5)/5 + 2tx + (3x^-1)/-1 + c" << endl;
    cout << "\t = 1/5px^5 + 2tx - 3x^-1 + c" << endl << endl;
    getch();

    cout << "[10] S(pt^3 + q^2 + px^3)dt " << endl;
    cout << "\t With respect to t, treat q and x as constants." << endl;
    cout << "\t = (pt^4)/4 + q^2t + px^3t + c" << endl;
    cout << "\t = 1/4pt^4 + q^2t + px^3t + c" << endl << endl;
    getch();


}

void integration_8d(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 8d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "[1] Find the following integrals. " << endl;
    cout << "\t 1a) S(2x+3)x^2dx " << endl;
    cout << "\t Expand: S(2x^3 + 3x^2)dx" << endl;
    cout << "\t Integrate: = (2x^4)/4 + (3x^3)/3 + c" << endl;
    cout << "\t Answer: = 1/2x^4 + x^3 + c" << endl << endl;
    getch();

    cout << "\t 1b) S(2x^2+3)/x^2dx " << endl;
    cout << "\t Convert: S(2x^2)/x^2 + (3)/x^2 dx" << endl;
    cout << "\t Convert: S(2 + 3x^-2)dx" << endl;
    cout << "\t Integrate: 2x + (3x^-1)/-1 + c" << endl;
    cout << "\t Answer: 2x -3x^-1 + c" << endl << endl;
    getch();


    cout << "\t 1c) S(2x+3)^2dx" << endl;
    cout << "\t = S(2x+3)(2x+3)dx" << endl;
    cout << "\t = S(4x^2 + 12x + 9)dx" << endl;
    cout << "\t = (4x^3)/3 + (12x^2)/2 + 9x + c" << endl;
    cout << "\t = 4/3x^3 + 6x^2 + 9x + c" << endl << endl;
    getch();


    cout << "[2] Find Sf(x)dx when f(x) is given by the following: " << endl;
    cout << "\t f(x) = (x+2)^2 = (x+2)(x+2) = x^2 + 4x + 4 " << endl;
    cout << "\t S(x^2 + 4x + 4)dx" << endl;
    cout << "\t = (x^3)/3 + (4x^2)/2 + 4x + c" << endl;
    cout << "\t Answer: = 1/3x^3 + 2x^2 + 4x + c" << endl << endl;
    getch();


    cout << "\t 2f) (1/vx + 2vx) where v is the square root" << endl;
    cout << "\t Use standard results: (1/x^-1/2 + 2x^1/2)" << endl;
    cout << "\t Integrate: (1x^1/2)1/2 + (2x^3/2)/3/2 + c" << endl;
    cout << "\t Answer: 2x^1/2 + 4/3x^3/2 + c " << endl << endl;
    getch();

    cout << "[3] Find the following integrals: " << endl;
    cout << "\t 3a S(3vx + 1/x^2)dx" << endl;
    cout << "\t Use standard results: S(3x^1/2 + x^-2)" << endl;
    cout << "\t Integrate: (3x^3/2)/3/2 + (x^-1)/-1 + c" << endl;
    cout << "\t Answer: 2x^3/2 - x^-1 + c" << endl << endl;
    getch();
}

void integration_8e(){


}
