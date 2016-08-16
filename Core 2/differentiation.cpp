#include <iostream>
#include <cmath>
#include <conio.h>
#include "differentiation.h"
using namespace std;

void differentiation_9a(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 9a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "[1] Find the values of x for which f(x) is an increasing function, given that f(x) equals: " << endl;
    cout << "\t 1a) f(x) = 3x^2 + 8x + 2" << endl;
    cout << "\t f'(x) = 6x + 8" << endl;
    cout << "\t Since x^2 >= 0 for all real values of x including negatives" << endl;
    cout << "\t 3x^2 + 8 > 0" << endl;
    cout << "\t So f(x) is an increasing function." << endl;
    cout << "\t 6x + 8 > 0" << endl;
    cout << "\t 6x > -8 " << endl;
    cout << "\t x > -8/6" << endl;
    cout << "\t x > -4/3" << endl << endl;
    getch();

    cout << "[2] Find the values of x for which f(x) is a decreasing function, given that f(x) equals: " << endl;
    cout << "\t 2a) x^2 - 9x" << endl;
    cout << "\t f'(x) = 2x - 9 " << endl;
    cout << "\t since it is stated as a decreasing function it is < 0" << endl;
    cout << "\t So 2x - 9 < 0" << endl;
    cout << "\t 2x < 9" << endl;
    cout << "\t x < 9/2" << endl << endl;
    getch();
}

void differentiation_9b(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 9b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to find the coordinates of a stationary point on a curve" << endl;
    cout << "and work out whether it is a minimum point, a maximum or a point of inflexion." << endl << endl;

    cout << "[1] The points where f(x) stops increasing and begins to decrease are called maximum points. " << endl << endl;
    getch();

    cout << "[2] The points where f(x) stop decreasing and begins to increase are called minimum points." << endl << endl;
    getch();

    cout << "[3] A point of inflexion is a point where the gradient is at a maximum or minimum value in " << endl;
    cout << "the neighbourhood of the point. " << endl << endl;
    getch();

    cout << "[4] Points of zero gradient are called stationary points and stationary points may be maximum " << endl;
    cout << "points, minimum points or points of inflexion." << endl << endl;
    getch();

    cout << "[5] If dy/dx = 0 and d^2y/dx^2 > 0, the point is a minimum point." << endl << endl;
    getch();

    cout << "[6] If dy/dx = 0 and d^2y/dx^2 < 0, the point is a maximum point." << endl << endl;
    getch();

    cout << "[7] if dy/dx = 0 and d^2y/dx^2 = 0, the point is either a maximum or a minimum point or a point of inflexion." << endl << endl;
    getch();

    cout << "[8] If dy/dx = 0 and d^2y/dx^2 = 0, but d^3y/dx^3 != 0 then the point is a point of inflexion" << endl << endl;
    getch();


    cout << "[1] Find the least value of each of the following functions: " << endl;
    cout << "\t 1a) f(x) = x^2 - 12x + 8" << endl;
    cout << "\t Let y = x^2 - 12x + 8 " << endl;
    cout << "\t Then dy/dx = 2x - 12" << endl;
    cout << "\t Put dy/dx = 0, then x = 6" << endl;
    cout << "\t So y = (6)^2 - 12(6) + 8 = -28" << endl;
    cout << "\t The least value of this quadratic is -28, and the range is given by f(x) >= - 28" << endl << endl;
    getch();


    cout << "[2] Find the greatest value of each of the following functions: " << endl;
    cout << "\t 2a) f(x) = 10 - 5x^2" << endl;
    cout << "\t f'(x) = -10x" << endl;
    cout << "\t Put f'(x) = 0" << endl;
    cout << "\t -10x = 0" << endl;
    cout << "\t x = 0" << endl;
    cout << "\t f(0) = 10 - 5(0)^2 = 10" << endl;
    cout << "\t Maximum value of f(x) is 10." << endl << endl;
    getch();

}

void differentiation_9c(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 9c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to apply what you have learned about turning points to solve problems." << endl << endl;
    getch();

    cout << "[1] A rectangular garden is fenced on three sides, and the house forms the fourth side of the rectangle." << endl;
    cout << "Given that the total length of the fence is 80m show that the area, A, of the garden is given by the" << endl;
    cout << "formula A = y(80-2y), where y is the distance from the house to the end of the garden. " << endl;
    cout << "Given that the area is a maximum for this length of fence, find the dimensions of the enclosed garden " << endl;
    cout << "and the area which is enclosed." << endl;

    cout << "\t 1) Let the width of the garden be x, and height by y" << endl;
    cout << "\t We have 2y and 1x" << endl;
    cout << "\t the perimeter is 80 so, 2y + x = 80" << endl;
    cout << "\t Therefore x = 80 - 2y" << endl;
    cout << "\t Area must be width * height so A = xy" << endl;
    cout << "\t sub x = 80 - 2y so A = y(80-2y) = 80y - 2y^2" << endl;
    cout << "\t dA/dy = 80 - 4y" << endl;
    cout << "\t put dA/dy = 0 for maximum area" << endl;
    cout << "\t 80 - 4y = 0 , 80 = 4y, y = 20" << endl;
    cout << "\t sub y = 20 to find x, 2(20) + x = 80" << endl;
    cout << "\t 40 + x = 80" << endl;
    cout << "\t x = 40" << endl;
    cout << "\t So area = 20m height * 40m width" << endl;
    cout << "\t Answer: 800m^2" << endl << endl;
    getch();


}

void differentiation_summary(){
    cout << "----------------------------------------------------" << endl;
    cout << "--------------- Summary of key points --------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;


    cout << "[1] For an increasing function f(x) in the interval (a, b)," << endl;
    cout << "f'(x) > 0 in the interval a <= x <= b" << endl << endl;
    getch();

    cout << "[2] For a decreasing function f(x) in the interval (a,b)," << endl;
    cout << "f'(x) < 0 in the interval a <= x <= b." << endl << endl;
    getch();

    cout << "[3] The points where f(x) stops increasing and begins to" << endl;
    cout << "decrease are called maximum points." << endl << endl;
    getch();

    cout << "[4] The points where f(x) stops decreasing and begins to" << endl;
    cout << "increase are called minimum points. " << endl << endl;
    getch();

    cout << "[5] The point of inflexion is a point where the gradient is at a" << endl;
    cout << "maximum or minimum value in the neighbourhood of the point. " << endl << endl;
    getch();

    cout << "[6] A stationary point is a point of zero gradient. It may be" << endl;
    cout << "a maximum, a minimum or a point of inflexion." << endl << endl;
    getch();

    cout << "[7] To find the coordinates of a stationary point find " << endl;
    cout << "dy/dx, i.e f'(x) and solve the equation f'(x) =0 to find the " << endl;
    cout << "value, or values, of x and then substitute into y = f(x) to" << endl;
    cout << "find the corresponding values of y." << endl << endl;
    getch();

    cout << "[8] The stationary value of a function is the value of y at " << endl;
    cout << "the stationary point. You can sometimes use this to find the range of a function." << endl << endl;
    getch();

    cout << "[9] You may determine the nature of a stationary point by " << endl;
    cout << "using the second derivative." << endl;
    cout << "If dy/dx = 0 and d^2y/dx^2 > 0, the point is a minimum point. " << endl;
    cout << "If dy/dx = 0 and d^2y/dx^2 < 0, the point is a maximum point. " << endl;
    cout << "If dy/dx = 0 and d^2y/dx^2 = 0, the point is either a maximum" << endl;
    cout << "or a minimum point or a point of inflexion." << endl << endl;
    getch();

    cout << "[10] In problems where you need to find the maximum or " << endl;
    cout << "minimum value of a variable y, first establish a formula " << endl;
    cout << "for y in terms of x, then differentiate and put the " << endl;
    cout << "derived function equal to zero to find x and then y." << endl << endl;
    getch();


 }
