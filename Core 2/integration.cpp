#include <iostream>
#include <cmath>
#include <conio.h>
#include "integration.h"
using namespace std;

void integration_11a(){
    cout << "----------------------------------------------------" << endl;
    cout << "------------------- Section 11a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to integrate simple functions within defined limits." << endl;
    cout << "This is called definite integration." << endl << endl;
    getch();

    cout << "[1] Evaluate the following definite integrals: " << endl;
    cout << "\t 1a) S2-1(2/x^3 + 3x)dx" << endl;
    cout << "\t the limits are 2 and 1, where b = 2 and a = 1" << endl;
    cout << "\t integrate with respect to x: 2x^-2/-2 + 3x^2/2 + c" << endl;
    cout << "\t f'(x) = -x^-2 + 3/2x^2 + c" << endl;
    cout << "\t = Sb-a f'(x)dx = f(b) - f(a)" << endl;
    cout << "\t (-(2)^-2 + 3/2(2)^2 + c) - (-(1)^-2 + 3/2(1)^2 + c)" << endl;
    cout << "\t the constant is removed as c - c = 0" << endl;
    cout << "\t (-1/4 + 3/2(4) ) - (-1 + 3/2)" << endl;
    cout << "\t (-1/4) + 6) - (-1 + 3/2)" << endl;
    cout << "\t (23/4) - (2/4)" << endl;
    cout << "\t (21/4)" << endl;
    cout << "\t Answer: 5  1/4" << endl << endl;
    getch();
}

void integration_11b(){
    cout << "----------------------------------------------------" << endl;
    cout << "------------------- Section 11b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to use definite integration to find areas under curves." << endl << endl;
    getch();

    cout << "[1] Find the area between the curve with equation y = f(x), the x-axis" << endl;
    cout << "and the lines x = a and x = b in each of the following cases." << endl;
    cout << "\t 1a) f(x) = 3x^2 - 2x + 2; a = 0, b = 2" << endl;
    cout << "\t integrate f(x) with limits 2, 0"  << endl;
    cout << "\t integrated: 3x^3/3 - 2x^2/2 + 2x + c" << endl;
    cout << "\t = x^3 - x^2 + 2x + c" << endl;
    cout << "\t limits 2, 0 : f(b) - f(a)" << endl;
    cout << "\t [(2)^3 + (2)^2 + 2(2) + c] - [(0)^3 + (0)^2 + 2(0) + c]" << endl;
    cout << "\t = (8 - 4 + 4) - ( 0 )" << endl;
    cout << "\t Area = 8 units ^2" << endl << endl;
    getch();

    cout << "[2] The sketch shows the part of the curve with equation y = x(x^2-4)" << endl;
    cout << "\t b = 0, a = -2 : f(b) - f(a)" << endl;
    cout << "\t A = Integrate with limits 0, -2:  x(x^2-4)dx" << endl;
    cout << "\t = Integrate with limits 0, -2: x^3 - 4x" << endl;
    cout << "\t = [x^4/4 -4x^2/2 ] limits 0, -2" << endl;
    cout << "\t = [1/4x^4 - 2x^2] limits 0, -2" << endl;
    cout << "\t = [1/4(0)^4 - 2(0)^2] - [1/4(-2)^4 -2(-2)^2]" << endl;
    cout << "\t = (0) - (16/4 - 8)" << endl;
    cout << "\t = 0 - 4 + 8" << endl;
    cout << "\t Area: 4 units^2" << endl << endl;
    getch();

}

void integration_11c(){
    cout << "----------------------------------------------------" << endl;
    cout << "------------------- Section 11c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to work out areas of curves under the x-axis." << endl << endl;
    getch();

    cout << "Sketch the following and find the area of the finite region or regions" << endl;
    cout << "bounded by the curves and the x-axis: " << endl;
    cout << "\t 1) y = x(x+2)" << endl;
    for(int x = -10; x <= 10; x++){
        cout << "\t X: " << x << " Y: " << equation_11c_1(x) << endl;
    }

    cout << "\t From the output we can see, the finite region is between -2 and 0" << endl;
    cout << "\t where y is a negative value." << endl;
    cout << "\t So our limits are -2, 0" << endl;
    cout << "\t Integrate y = x^2 + 2x with limits -2, 0" << endl;
    cout << "\t It is a negative area so the integral is - integrate with limits b=0 and a=-2" << endl;
    cout << "\t Integrated: x^3/3 + 2x^2/2 + c" << endl;
    cout << "\t = 1/3x^3 + x^2 + c" << endl;
    cout << "\t sub a = 0, b = -2 for f(b) - f(a)" << endl;
    cout << "\t = [1/3(0)^3 + (0)^2 + c] - [1/3(-2)^3 + (-2)^2 + c]" << endl;
    cout << "\t = (0) - (-8/3 + 4)" << endl;
    cout << "\t = - [-(-32/12 + 48/12)]" << endl;
    cout << "\t = - [-(16/12)]" << endl;
    cout << "\t = 1 and 1/3 units^2" << endl << endl;
    getch();
}

double equation_11c_1(double x){
                   // x^2 + 2x
    return (x*x) + (2*x);
}

void integration_11d(){
    cout << "----------------------------------------------------" << endl;
    cout << "------------------- Section 11d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to work out the area between a curve and a straight line." << endl << endl;
    getch();

    cout << "[1] The diagram shows part of the curve with equation y = x^2 + 2" << endl;
    cout << "and the line with the equation y = 6. The line cuts the curve at points A and B" << endl;
    cout << "\t 1a) Find the coordinates of point A and B." << endl;
    cout << "\t We can do this by subbing, y = 6 into the curves equation" << endl;
    cout << "\t 6 = x^2 + 2" << endl;
    cout << "\t x^2 - 4 = 0" << endl;
    cout << "\t (x-2)(x+2)=0 " << endl;
    cout << "\t there fore the coordinates of A(-2, 6) and B(2, 6)" << endl;
    cout << "\t 1b) Find the area of the finite region bounded by AB and the curve." << endl;
    cout << "\t Area = Integral with limits 2, -2: [6 -(x^2 + 2)]dx" << endl;
    cout << "\t Integrate 2, -2: (4-x^2)dx = [4x - x^3/3] limits: 2, -2" << endl;
    cout << "\t [4(2) - (2)^3/3] - [4(-2) -(-2)^3/3]" << endl;
    cout << "\t = (8 - 8/3) - (-8 + 8/3) = 16 - 16/3" << endl;
    cout << "\t Area = 32/3 units^2" << endl << endl;
    getch();

}

void integration_11e(){
    cout << "----------------------------------------------------" << endl;
    cout << "------------------- Section 11e --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Sometimes you may want to find the area beneath a curve but you may not be able" << endl;
    cout << "to integrate the equation. You can find an approximation to the area using the " << endl;
    cout << "trapezium rule." << endl << endl;
    getch();


    cout << "[1] Copy and complete the table below and use the trapezium rule to estimate" << endl;
    cout << "The integral with limits 3, 1: S3,1[1/(x^2 + 1)]dx" << endl;
    cout << "\t x             | 1 | 1.5 | 2 | 2.5 | 3" << endl;
    cout << "\t y = 1/x^2 + 1 |0.5|0.308| ? |0.138| ?" << endl;
    cout << "\t When x = 2, y = " << equation_11e_1(2) << endl;
    cout << "\t When x = 3, y = " << equation_11e_1(3) << endl;
    double height = 3-1;
    height = height / 4;
    cout << "\t h = (3-1)/4 = " << height << endl;
    cout << "Area = 1/2 * (0.5)[0.5 + 2(0.308 + 0.2 + 0.138) + 0.1]" << endl;
    cout << "     = 1/4[1.892]" << endl;
    cout << "     = 0.473 units^2" << endl << endl;
    getch();
}

double equation_11e_1(double x){
    return 1 / (pow(x, 2) + 1);
}

void integration_summary(){
    cout << "----------------------------------------------------" << endl;
    cout << "--------------- Summary of key points --------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "[1] The definite integral with limits b,a: f'(x)dx = f(b) - f(a)" << endl << endl;
    getch();

    cout << "[2] The area beneath the curve with equation y = f(x)" << endl;
    cout << "and between the lines x = a and x = b is" << endl;
    cout << "Area = definite integral with limits ba: Sb,a f(x)dx" << endl << endl;
    getch();

    cout << "[3] The area between a line (equation, y) and a curve" << endl;
    cout << "(equation y2) is given by" << endl;
    cout << "Area = Sb,a (y1-y2)dx" << endl << endl;
    getch();

    cout << "[4] Trapezium rule (in the formula booklet)" << endl;
    cout << "Sb,a y dx = 1/2h[y0 + 2(y1 + y2 +... yn-1) + yn]" << endl;
    cout << "where h = b-a/n and y1 = f(a +ih)" << endl << endl;
    getch();
}
