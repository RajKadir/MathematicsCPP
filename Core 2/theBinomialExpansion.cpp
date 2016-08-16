#include <iostream>
#include <conio.h>
#include <math.h>       /* sin */
#include "theBinomialExpansion.h"

using namespace std;

void theBinomialExpansion_5a(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 5a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You can use Pascal's Triangle to quickly expand expressions such as (x+ 2y)^3" << endl;

    cout << "                 1                " << endl;
    cout << "               1   1              " << endl;
    cout << "             1   2   1            " << endl;
    cout << "           1  3     3  1          " << endl;
    cout << "         1  4    6    4  1        " << endl;
    cout << "       1  5   10   10   5  1      " << endl << endl;
    getch();

    cout << "..and so on.." << endl;



    cout << "[1] Write down the expansion of: " << endl;
    cout << "\t 1a) (x+y)^4" << endl;
    cout << "\t Index = 4, so look at the 5th line in Pascals triangle to find the coefficients." << endl;
    cout << "\t The coefficients are: 1, 4, 6, 4, 1 so:" << endl;
    cout << "\t (x+y)^4 = 1x^4 + 4x^3(y) + 6x^2(y)^2 + 4x(y)^3 + 1(y)^4 " << endl;
    cout << "\t         = x^4 + 4x^3y + 6x^2y^2 + 4xy^3 + y^4" << endl << endl;
    getch();


    cout << "[2] Find the coefficient of x^3 in the expansion of: " << endl;
    cout << "\t a) (x+4)^4" << endl;
    cout << "\t Index = 4, so 5th line in pascals triangle" << endl;
    cout << "\t The coefficients are: 1, 4, 6, 4, 1" << endl;
    cout << "\t (x+4)^4 = 1x^4  + 4x^3(4) + ... " << endl;
    cout << "\t (x+4)^4 = x^4 + 16x^3 + ..." << endl;
    cout << "\t So the coefficient of x^3 is 16" << endl << endl;
    getch();


    cout << "[3] Fully expand the expression (1 + 3x)(1+2x)^3" << endl;
    cout << "\t (1+2x)^3 here the index = 3, so 4th line" << endl;
    cout << "\t The coefficients are: " << endl;
    cout << "\t 1   , 3       , 3       , 1" << endl;
    cout << "\t 1^3 + 1^2(2x) + 1(2x)^2 + (2x)^3 " << endl;
    cout << "\t 1 + 6x + 12x^2 + 8x^3" << endl;
    cout << "\t (1+3x)(1+2x)^3 " << endl;
    cout << "\t = (1+3x)(1 + 6x + 12x^2 + 8x^3)"  << endl;
    cout << "\t = 1 + 6x + 12x^2 + 8x^3 + 3x + 18x^2 + 36x^3 + 24x^4 " << endl;
    cout << "\t = 1 + 9x + 30x^2 + 44x^3 + 24x^4" << endl << endl;
    getch();
}


void theBinomialExpansion_5b(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 5b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You can use combinations and factorial notation to help you expand binomial expressions. " << endl;
    cout << "For larger indices, it is quicker than using Pascal's Triangle." << endl;

    cout << "The number of ways of choosing r items from a group of n items is written nCr or (n/r) and is calculated by: " << endl;
    cout << "\t n!/(n-r)!r!" << endl;
    cout << "\t e.g. 3C2 = 3!/(3-2)!2! = 6/1*2 = 3" << endl << endl;
    getch();

    cout << "[1] Find the values of the followings: " << endl;
    cout << "\t a) 4! = 4 * 3 * 2 * 1 = 24" << endl;

    /*
        My C++ function which calculates this using recursion
    */
    cout << "\t C++: 4! = " << factorial(4) << endl;

}

int factorial(int x){
    // The value returned
    int value;

    // If users enter !1 then set the value to 1, otherwise calculate with recursion
    if(x == 1){
        value = 1;
    }else{
        value = x * factorial(x - 1);
    }

    return value;
}

void theBinomialExpansion_5c(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 5c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You can use (n r) to work out the coefficients in the binomial expansion." << endl << endl;
    getch();

    cout << "[1] Write down the expansion of the following: " << endl;
    cout << "\t a) (2x + y)^4" << endl;
    cout << "\t = 4C0(2x)^4 + 4C1(2x)^3(y) + 4C2(2x)^2(y)^2 + 4C3(2x)^1(y)^3 + 4C4(y)^4" << endl;
    cout << "\t = 1 * 16x^4 + 4 * 8x^3y + 6 * 4x^2y^2 + 4 * 2xy^3 + 1 * y^4" << endl;
    cout << "\t = 16x^4 + 32x^3y + 24x^2y^2 + 8xy^3 + y^4" << endl << endl;
    getch();
}

void theBinomialExpansion_5d(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 5d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "[1] Use the binomial expansion to find the first four terms of" << endl;
    cout << "\t a) (1+x)^8" << endl;
    cout << "\t n = 8, and x = x" << endl;
    cout << "\t (1+x)^8 = 1 + 8x + 8*7/2!x^2 + 8*7*6/3!x^3 + ..." << endl;
    cout << "\t (1+x)^8 = 1 + 8x + 28x^2 + 56x^3 + ..." << endl << endl;
    getch();
}

void theBinomialExpansion_summary(){
    cout << "----------------------------------------------------" << endl;
    cout << "--------------- Summary of key points --------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "[1] You can use Pascal's Triangle to multiply out a bracket." << endl << endl;
    getch();

    cout << "[2] You can use combinations and fractional notation to help you expand binomial" << endl;
    cout << "expressions. For larger indices it is quicker than using Pascal's Triangle." << endl << endl;
    getch();

    cout << "[3] n! = n * (n-1) * (n-2) * (n-3) * ... * 3 * 2 * 1" << endl << endl;
    getch();

    cout << "[4] The number of ways of choosing r items from a group of n items is written nCr or (n r) . " << endl;
    cout << "e.g. 3C2 = 3!/(3-2)!2! = 6/1*2 = 3" << endl << endl;
    getch();
}
