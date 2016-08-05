#include <iostream>
#include <conio.h>
#include "algebraAndFunctions.h"
using namespace std;

void algebraAndFunctions_1a(){

    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 1a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    /*
        Question 1
    */
    cout << "[1] Simplify these fractions: " << endl;
    cout << "\t 1a) (4x^4 + 5x^2 - 7x)/x" << endl;
    cout << "\t Divide each term: 4x^4/x + 5x^2/x -7x/x" << endl;
    cout << "\t Rules of Indices: 4x^3 + 5x -7x^0" << endl;
    cout << "\t Answer: 4x^3 + 5x -7" << endl << endl;
    getch();

    cout << "\t 1l) (-9x^9 -6x^4 - 2)/-3x" << endl;
    cout << "\t Divide each term: -9x^9/-3x -6x^4/3x -2/-3x" << endl;
    cout << "\t Rules of Indices: +3x^8 +2x^3 + 2/3x^-1" << endl;
    cout << "\t Answer: 3x^8 + 2x^3 + 2/3x^-1" << endl << endl;
    getch();

    /*
        Question 2
    */
    cout << "[2] Simply these fractions as far as possible: " << endl;
    cout << "\t 1a) (x+3)(x-2)/(x-2)" << endl;
    cout << "\t we can divide out (x-2), so we are left with (x+3)" << endl;
    cout << "\t Answer: x + 3" << endl << endl;
    getch();

    cout << "\t 1o) (2x^2-5x-3)/(2x^2-9x+9)" << endl;
    cout << "\t Factorise: 2x^2 -5x -3 " << endl;
    cout << "\t 2 * -3 = -6" << endl;
    cout << "\t and -6 * 1 = -6" << endl;
    cout << "\t     -6 + 1 = -5" << endl;
    cout << "\t So 2x^2 -5x -3 = 2x^2 -6x + 1x -3" << endl;
    cout << "\t = 2x(x-3)1(x-3)" << endl;
    cout << "\t = (2x+1)(x-3)" << endl;
    cout << "\t Factorise: 2x^2-9x+9" << endl;
    cout << "\t 2 * 9 = 18" << endl;
    cout << "\t and  -6 * -3 = 18" << endl;
    cout << "\t      -6 + -3 = -9" << endl;
    cout << "\t So 2x^2 -9x +9 = 2x^2 -6x -3x + 9" << endl;
    cout << "\t = 2x(x-3)-3(x-3)" << endl;
    cout << "\t = (2x-3)(x-3)" << endl;
    cout << "\t = (2x+1)(x-3)/(2x-3)(x-3)" << endl;
    cout << "\t divide out (x-3)" << endl;
    cout << "\t Answer: (2x+1)/(2x-3)" << endl << endl;
    getch();
}

void algebraAndFunctions_1b(){

    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 1b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You can divide a polynomial by (x +- p) " << endl;
    cout << "[1] Divide:" << endl;
    cout << "\t 1a) x^3 + 6x^2 + 8x + 3 by (x+1)" << endl;
    cout << "\t x+1|x^3 + 6x^2 + 8x + 3" << endl;
    cout << "\t Current Answer: x^2 " << endl;
    cout << "\t     x^3 + x^2  " << endl;
    cout << "\t           5x^2 + 8x" << endl;
    cout << "\t Current Answer: x^2 + 5x" << endl;
    cout << "\t Multiply (x+1) by 5x: 5x^2 + 5x" << endl;
    cout << "\t Subtract: 5x^2 + 8x - 5x^2 + 5x = 3x " << endl;
    cout << "\t Copy 3: 3x + 3" << endl;
    cout << "\t Divide 3x by x: 3" << endl;
    cout << "\t Answer: x^2 + 5x + 3" << endl;

    cout << "\t Due to the nature of this question and the readability of it in a console, I have skipped it." << endl;

}

void algebraAndFunctions_1c(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 1c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "[1] Divide:" << endl;
    cout << "\t 1a) x^3 + x + 10 by (x+2)" << endl;
    /*
        Todo
    */
    getch();


    cout << "[2] Divide:" << endl;
    cout << "\t 2a) x^3 + x^2 -36 by (x-3)" << endl;
    /*
        Todo
    */
    getch();
}

void algebraAndFunctions_1d(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 1d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "[1] Use the factor theorem to show that: " << endl;
    cout << "\t 1a) (x-1) is a factor of 4x^3 -3x^2 - 1" << endl;
    cout << "\t let x-1 = 0, so x = 1 " << endl;
    cout << "\t f(1) = 4(1)^3 -3(1)^2 - 1 = 4 - 3 - 1 = 0" << endl;
    cout << "\t So (x-1) is a factor of 4x^3 -3x^2 -1" << endl << endl;
    getch();

    cout << "[2] Show that (x-1) is a factor of x^3+6x^2+5x-12 and factorise." << endl;
    cout << "\t Let f(x) = x^3 + 6x^2 + 5x - 12" << endl;
    cout << "\t Let x-1=0, So x=1" << endl;
    cout << "\t f(1) = (1)^3 + 6(1)^2 + 5(1) - 12 = 1 + 6 + 5 - 12 = 0" << endl;
    cout << "\t so (x-1) is a factor" << endl;
    cout << "\t Divide: x-1|x^3 + 6x^2 + 5x - 12" << endl;
    cout << "\t Divide first term by x: x^2" << endl;
    cout << "\t Multiply (x-1) by x^2: x^3 - x^2 " << endl;
    cout << "\t Subtract it: (x^3 + 6x^2) - (x^3 - x^2) = 7x^2" << endl;
    cout << "\t Copy next term: So 7x^2 + 5x" << endl;
    cout << "\t Divide second term by x: 7x" << endl;
    cout << "\t Answer so far: x^2 + 7x" << endl;
    cout << "\t Multiply (x-1) by 7x: 7x^2 -7x" << endl;
    cout << "\t Subtract it: (7x^2 + 5x) - (7x^2-7x) = 12x" << endl;
    cout << "\t Copy next term: So 12x - 12" << endl;
    cout << "\t Divide third term by x: 12" << endl;
    cout << "\t Multiply (x-1) by 12: 12x - 12" << endl;
    cout << "\t Subtract it: (12x - 12) - (12x - 12) = 12x -12 -12x + 12 = 0" << endl;
    cout << "\t So: x^2 + 7x + 12" << endl;
    cout << "\t Now Factorise: ac = 12, 3 + 4 = 7" << endl;
    cout << "\t Factorised: (x+3)(x+4)" << endl;
    cout << "\t Add the other factor (x+1)" << endl;
    cout << "\t Answer: (x-1)(x+3)(x+4)" << endl << endl;
    getch();
}

void algebraAndFunctions_1e(){

}

void algebraAndFunctions_1f(){

}

void algebraAndFunctions_summary(){

}

