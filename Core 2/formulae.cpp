#include <iostream>
#include <cmath>
#include <conio.h>
#include "formulae.h"
using namespace std;

void formulae_logarithms(){
    cout << "----------------------------------------------------" << endl;
    cout << "---------------- Laws of logarithms ----------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "\t loga(x) + loga(y) = loga(xy)" << endl << endl;
    cout << "\t loga(x) - loga(y) = loga(x/y)" << endl << endl;
    cout << "\t kloga(x) = loga(x^k)" << endl << endl;
    getch();

}

void formulae_trigonometry(){
    cout << "----------------------------------------------------" << endl;
    cout << "------------------- Trigonometry -------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "\t In the triangle ABC" << endl << endl;
    cout << "\t a / sin A = b / sin B = c / sin C" << endl << endl;
    cout << "\t area = (1/2)(a)(b)(sin C)" << endl << endl;
    getch();
}

void formulae_area(){
    cout << "----------------------------------------------------" << endl;
    cout << "----------------------- Area -----------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Area under a curve = the definite integral of y with " << endl;
    cout << "respect to x between limits a and b, and y > = 0" << endl << endl;
    getch();
}

void formulae_symbols(){
    cout << "----------------------------------------------------" << endl;
    cout << "---------------------- Symbols ---------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "e               is the base of natural logarithms" << endl << endl;
    getch();

    cout << "e^x, exp x      is exponential function of x" << endl << endl;
    getch();

    cout << "sin, cos tan, cosec, sec, cot are 'the circular functions'" << endl << endl;
    getch();

    cout << "arcsin, arcos, arctan, arccosec, arcsec, arccot are 'the inverse circular functions' " << endl << endl;
    getch();

    cout << "sinh, cosh, tanh, cosech, sech, coth are 'the hyperbolic functions'" << endl << endl;
    getch();

    cout << "arcsinh, arcosh, arctanh, arcosech, arsech, arcoth are 'the inverse hyperbolic functions'" << endl << endl;
    getch();


}
