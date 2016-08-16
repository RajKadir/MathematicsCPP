#include <iostream>
#include <cmath>
#include <conio.h>
#include "trigonometricalIdentitiesAndSimpleEquations.h"
using namespace std;

void trigonometricalIdentitiesAndSimpleEquations_10a(){
    cout << "----------------------------------------------------" << endl;
    cout << "------------------- Section 10a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to use the relationships tan theta = sin theta/cos theta" << endl;
    cout << "and sin^2 theta + cos^2 theta == 1" << endl << endl;
    getch();

    cout << "[1] Simplify each of the following expressions: " << endl;
    cout << "\t a) 1 - cos^2(1/2)theta" << endl;
    cout << "\t sin^2 1/2theta + cos^2 1/2theta == 1" << endl;
    cout << "\t sin^2 1/2theta == 1 - cos^2 1/2 theta" << endl;
    cout << "\t Answer: sin^2 1/2 theta" << endl << endl;
    getch();

}

void trigonometricalIdentitiesAndSimpleEquations_10b(){
    cout << "----------------------------------------------------" << endl;
    cout << "------------------- Section 10b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to solve simple trigonometrical equations of the form sin theta = k," << endl;
    cout << "cos theta = k, (where -1 <= k <=1) and tan theta = p (p e R)" << endl << endl;
    getch();

    cout << "[1] Solve the following equations for theta, in the interval 0 < theta <= 360" << endl;
    cout << "\t a) sin theta = -1" << endl;
    cout << "\t Looking at the graphs, y = sin theta" << endl;
    cout << "\t sin theta = -1 when theta = 270 degrees" << endl << endl;
    getch();

}

void trigonometricalIdentitiesAndSimpleEquations_10c(){
    cout << "----------------------------------------------------" << endl;
    cout << "------------------- Section 10c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to solve equations of the form sin (ntheta + alpha) = k, cos(ntheta + alpha) = k," << endl;
    cout << "and tan (ntheta + alpha) = p." << endl << endl;
    getch();

    cout << "[1] Find the values of theta, in the interval 0 <= theta <= 360 degrees, for which: " << endl;
    cout << "\t a) sin 4theta = 0" << endl;
    cout << "\t Let X = 4theta so 0 <= X <= 4(360) degrees" << endl;
    cout << "\t Solve sin X = 0 in the interval 0 <= X <= 1440" << endl;
    cout << "\t From the graph of y = sin X, sin X = 0 where" << endl;
    cout << "\t X = 0, 180, 360, 540, 720, 900, 1080, 1260, 1440" << endl;
    cout << "\t theta = X/4 = 0, 45, 90, 135, 180, 225, 270, 315, 360" << endl << endl;
    getch();
}

void trigonometricalIdentitiesAndSimpleEquations_10d(){
    cout << "----------------------------------------------------" << endl;
    cout << "------------------- Section 10d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to solve quadratic equations in sin theta or cos theta or tan theta. An" << endl;
    cout << "equation like sin^2(theta) + 2sin(theta) - 3 = 0 can be solved in the same was as " << endl;
    cout << "x^2 + 2x - 3 = 0 with sin(theta) replacing x" << endl << endl;
    getch();

    cout << "[1] Solve for theta, in the interval 0 <= theta <= 360 degrees, the following equations." << endl;
    cout << "\t a) 4cos^2(theta) = 1" << endl;
    cout << "\t = cos^2(theta)= 1/4" << endl;
    cout << "\t Square root both sides " << endl;
    cout << "\t cos(theta) = +- 1/2" << endl;
    cout << "\t solutions must be 60, 120, 240, 300" << endl << endl;
    getch();
}

void trigonometricalIdentitiesAndSimpleEquations_summary(){
    cout << "----------------------------------------------------" << endl;
    cout << "--------------- Summary of key points --------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;


    cout << "[1] Tan x = sin x/ cos x (providing cos x != 0, when tan x is not defined." << endl;
    getch();

    cout << "[2] sin^2 x + cos^2 x = 1" << endl << endl;
    getch();

    cout << "[3] A first solution of the equation sin x = k is your " << endl;
    cout << "calculator value, a = sin ^-1 k. A second solution is" << endl;
    cout << "(180-a), or (PI - a) if you are working in radians." << endl;
    cout << "Other solutions are found by adding or subtracting" << endl;
    cout << "multiples of 360 or 2PI radians." << endl << endl;
    getch();

    cout << "[4] A first solution of the equation cos x = k is your " << endl;
    cout << "calculator value of a = cos ^-1 k. A second solution is " << endl;
    cout << "(360degrees - a), or (2PI - a) if you are working in radians. " << endl;
    cout << "Other solutions are found by adding or subtracting" << endl;
    cout << "multiples of 360 degrees or 2PI radians." << endl << endl;
    getch();

    cout << "[5] A first solution of the equation tan x = k is your " << endl;
    cout << "calculator value a = tan^-1 k. A second solution is" << endl;
    cout << "(180 + a), or (PI + a) if you are working in radians." << endl;
    cout << "Other solutions are found by adding or subtracting" << endl;
    cout << "multiples of 360 degrees or 2PI radians." << endl << endl;
    getch();

}
