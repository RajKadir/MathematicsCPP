#include <iostream>
#include <conio.h>
#include <cmath>
#include "exponentialsAndLogarithms.h"
using namespace std;

void exponentialsAndLogarithms_3a(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 3a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be familiar with the function y = a* (a > 0) and to know \n the shape of its graph" << endl;

    cout << "As an example: look at the table of values for y = 2^x: " << endl;

    for(int x=-3; x <=3; x++){
        cout << "X: " << x << " Y: " << equationOne(2, x) << endl;
    }
    cout << " " << endl;

    cout << "[1] a) Draw an accurate graph of y = (1.7)^x, for -4 <= x <= 4" << endl;
    cout << "\t b) use your graph to solve the equation (1.7)^x = 4" << endl;
    for(int x=-4; x <= 4; x ++){
        cout << "X: " << x << " Y: " << equationOne(1.7, x) << endl;
    }
    cout << "Since this requires a drawn graph, the question is done on paper." << endl << endl;
    getch();

}

double equationOne(double coefficient, double power){
    return pow(coefficient, power);
}

void exponentialsAndLogarithms_3b(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 3b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Writing an expression as a logarithm. " << endl;
    cout << "log a N = X means that a^X = N, where a is called the base of the logarithm. " << endl << endl;
    getch();

    cout << "2^5 = 32, a = 2, x = 5, n = 32" << endl;
    cout << "So log2 32 = 5" << endl;
    cout << "the logarithm of 32, to base 2, is 5." << endl << endl;
    getch();

    cout << "[1] Rewrite as a logarithm. " << endl;
    cout << "\t 1a) 4^4 = 256, a = 4, x = 4, n = 256" << endl;
    cout << "\t So log4 256 = 4" << endl;
    cout << "\t the logarithm of 256, to base 4, is 4. " << endl << endl;
    getch();

    cout << "\t 1b) 3^-2 = 1/9, a = 3, b = -2, n = 1/9" << endl;
    cout << "\t So log3 1/9 = -2" << endl;
    cout << "\t the logarithm of 1/9, to base 3, is -2" << endl << endl;
    getch();

}

void exponentialsAndLogarithms_3c(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 3c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to calculate logarithms to the base 10 using your calculator. " << endl;
    cout << "Find the value of x for which 10^x = 500" << endl;
    cout << "So log10 500 = x" << endl;
    cout << "           x = log10 500" << endl;
    cout << "             = 2.70 (to 3 s.f.)" << endl << endl;
    getch();

    cout << "Find from your calculator the value" << endl;
    cout << "\t 1) log10 20" << endl;
    cout << "\t = " << log10(20) << endl << endl;
    getch();

    cout << "\t 8) log10 999" << endl;
    cout << "\t = " << log10(999) << endl << endl;
    getch();
}

void exponentialsAndLogarithms_3d(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 3d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to know the laws of logarithms." << endl;

    cout << "The multiplication law: loga(xy) = loga(x) + loga(y)" << endl << endl;
    getch();

    cout << "The division law: loga(x/y) = loga(x) - loga(y)" << endl << endl;
    getch();

    cout << "The power law: loga(x)^k = kloga(x)" << endl << endl;
    getch();

    cout << "Since 1/x = x^-1, the power rule shows that loga(1/x) = loga(x^-1) = -loga(x)" << endl << endl;
    getch();

    cout << "[1] Write as a single logarithm: " << endl;
    cout << "\t a) log2(7) + log2(3)" << endl;
    cout << "\t Multiplication rule: log2(7*3) = log2(21)" << endl << endl;
    getch();

    cout << "\t b) log2(36) - log2(4)" << endl;
    cout << "\t Division law: log2(36/4) = log2(9)" << endl << endl;
    getch();

    cout << "\t e) log10(5) + log10(6) - log10(1/4)" << endl;
    cout << "\t Multiplication and division law: log10((5*6)/(1/4)) = log10(120)" << endl << endl;
    getch();

    cout << "[2] Write as a single logarithm, then simplify: " << endl;
    cout << "\t a) log2(40) - log2(5)" << endl;
    cout << "\t = log(40/5) = log2(8)" << endl << endl;
    getch();

    cout << "\t c) 2log12(3) + 4log12(2) " << endl;
    cout << "\t = log12(3)^2 + log12(2)^4" << endl;
    cout << "\t = log12(9) + log12(16) " << endl;
    cout << "\t = log12(9*16)" << endl;
    cout << "\t = log12(144)" << endl;
    /*
        Since there is no built in n base function
        we can use simple maths logn(x) = log(x)/log(n)
    */
    cout << "\t Answer: " << log(144)/log(12) << endl << endl;
    getch();

    cout << "\t e) 2log10(20) -(log10(5) + log10(8))" << endl;
    cout << "\t = log10(20)^2 -(log10(5*8))" << endl;
    cout << "\t = log10(400) - log(40)" << endl;
    cout << "\t = log10(400/40)" << endl;
    cout << "\t = log10(10)" << endl;
    cout << "\t Answer: " << log10(10) << endl << endl;
    getch();


    cout << "[3] Write in terms of loga(x), loga(y) and loga(z): " << endl;
    cout << "\t a) loga(x^3y^4z)" << endl;
    cout << "\t loga(x^3) + loga(y^4) + loga(z)" << endl;
    cout << "\t 3loga(x) + 4loga(y) + loga(z)" << endl << endl;
    getch();

    cout << "\t b) loga(x^5/x^2)" << endl;
    cout << "\t = loga(x^5) - loga(y^2)" << endl;
    cout << "\t = 5loga(x) - 2loga(y)" << endl << endl;
    getch();


    cout << "\t e) loga(vax) where v = square root" << endl;
    cout << "\t square root can be written as half power" << endl;
    cout << "\t = loga(a)^1/2 + loga(x)^1/2" << endl;
    cout << "\t = 1/2loga(a) + 1/2loga(x)" << endl;
    cout << "\t anything log to the same base is equal to 1" << endl;
    cout << "\t = 1/2 + 1/2loga(x)" << endl << endl;
    getch();
}

void exponentialsAndLogarithms_3e(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 3e --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to solve equations of the form a^x = b" << endl << endl;
    getch();

    cout << "[1] Solve " << endl;
    cout << "\t a) 2^x = 75" << endl;
    cout << "\t log10(2^x) = log10(75)" << endl;
    cout << "\t xlog10(2) = log10(75)" << endl;
    cout << "\t x = log10(75)/log10(2)" << endl;
    cout << "\t x = " << log10(75)/log10(2) << endl << endl;
    getch();

    cout << "\t j) 3^4-3x = 4^x+5" << endl;
    cout << "\t = log10(3^4-3x) = log10(4^x+5)" << endl;
    cout << "\t (4-3x)log10(3) = (x+5)log10(4)" << endl;
    cout << "\t 4log10(3)-3xlog10(3) = xlog10(4) + 5log10(4)" << endl;
    cout << "\t 4log10(3) - 5log10(4) = xlog10(4) + 3xlog10(3)" << endl;
    cout << "\t 4log10(3) - 5log10(4) = x(log10(4) + 3log10(3)) " << endl;
    cout << "\t x = (4log10(3) - 5log10(4))/(log10(4) + 3log10(3))" << endl;
    /*
        Calculation in C++
    */
    cout << "\t x = " << (4*log10(3)-5*log10(4))/(log10(4) + 3*log10(3)) << endl << endl;
    getch();
}

void exponentialsAndLogarithms_3f(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 3f --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "To evaluate a logarithm using your calculator, you sometimes need \n to change the base of the algorithm" << endl;
    cout << "Working in base a, suppose that:     loga(x) = m" << endl;
    cout << "Writing this as a power:                 a^m = x" << endl;
    cout << "Taking logs to a different base b: logb(a^m) = logb(x)" << endl;
    cout << "Using the power law:                mlogb(a) = logb(x)" << endl;
    cout << "Writing m as loga(x):                logb(x) = loga(x) * logb(a)" << endl;
    cout << "This can be written as: " << endl;
    cout << "* loga(x) = logb(x)/logb(a)" << endl;
    cout << "Using this rule, notice in particular that loga(b)=logb(b)/logb(a), but log b(b)=1, so:" << endl;
    cout << "* loga(b) = 1/logb(a) " << endl << endl;
    getch();

    cout << "[1] Find: " << endl;
    cout << "\t a) log7(120)" << endl;
    cout << "\t = " << log(120)/log(7) << endl << endl;
    getch();

    cout << "\t e) log6(4)" << endl;
    cout << "\t = " << log(4)/log(6) << endl << endl;
    getch();

    cout << "[2] Solve: " << endl;
    cout << "\t a) 8^x = 14" << endl;
    cout << "\t log10(8^x) = log10(14)" << endl;
    cout << "\t xlog10(8) = log10(14)" << endl;
    cout << "\t x = log10(14)/log10(8)" << endl;
    cout << "\t x = " << log10(14)/log10(8) << endl << endl;
    getch();


    cout << "[3] Solve: " << endl;
    cout << "\t c) log2(x) + log4(x) = 2" << endl;
    cout << "\t = log2(x) + log2(x)/log2(4) = 2" << endl;
    cout << "\t = log2(4) = 2 since logarithm 4 at base 2 is 2 (2^2 = 4)" << endl << endl;
    cout << "\t = log2(x) + log2(x)/2 = 2" << endl;
    cout << "\t = 2/2log2(x) + 1/2log2(x) = 2" << endl;
    cout << "\t = 3/2log2(x) = 2" << endl;
    cout << "\t = log2(x) = 2/3/2 = 4/3" << endl;
    cout << "\t = x = 2^4/3" << endl;
    /* Calculation 2^4/3 */
    cout << "\t x = " << pow(2, 4./3.) << endl << endl;
    getch();
}

void exponentialsAndLogarithms_summary(){
    cout << "----------------------------------------------------" << endl;
    cout << "--------------- Summary of key points --------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "[1] A function y = a^x, or f(x) = a^x, where a is a constant, is called an exponential function. " << endl << endl;
    getch();

    cout << "[2] loga(n) = x means that a^x = n, where a is called the base of the logarithm." << endl << endl;
    getch();

    cout << "[3] loga(1) = 0" << endl;
    cout << "    loga(a) = 1" << endl << endl;
    getch();

    cout << "[4] log10(x) is sometimes written as log(x)" << endl << endl;
    getch();

    cout << "[5] The laws of logarithms are: " << endl;
    cout << "\t loga(xy) = loga(x) + loga(y)    (the multiplication law)" << endl;
    cout << "\t loga(x/y) = loga(x) - loga(y)   (the division law)" << endl;
    cout << "\t loga(x)^k = kloga(x)            (the power law)" << endl << endl;
    getch();

    cout << "[6] From the power law: " << endl;
    cout << "\t loga(1/x) = -loga(x)" << endl << endl;
    getch();

    cout << "[7] You can solve an equation such as a^x = b by first taking logarithms (to base 10) of each side. " << endl << endl;
    getch();

    cout << "[8] The change of base rule for logarithms can be written as loga(x) = logb(x)/logb(a)" << endl << endl;
    getch();

    cout << "[9] From the change of base rule, loga(b) = 1/logb(a)" << endl << endl;
    getch();


}
