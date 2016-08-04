#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "algebraAndFunctions.h"
using namespace std;

void algebraAndFunctions_1a()
{
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 1a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;


    cout << "Simplify these expression by collecting like terms: " << endl;
    cout << "[1] 4x - 5y + 3x + 6y" << endl;
    cout << "\t 4x - 5y + 3x + 6y " << endl;
    cout << "\t We can simplify this by - rearranging the expression" << endl;
    cout << "\t 4x + 3x - 5y + 6y" << endl;
    cout << "\t Then do simple addition and we get 7x + y " << endl;
    cout << "\t Answer: 7x + y" << endl << endl;
    getch();


    cout << "[4] 3ab - 3ac + 3a - 7ab + 5ac" << endl;
    cout << "\t Rearrange: 3a + 3ab - 7ab - 3ac + 5ac " << endl;
    cout << "\t Answer: 3a - 4ab + 2ac " << endl << endl;
    getch();



    cout << "[18] (r^2 + 3t^2 + 9) - (2r^2 + 3t^2 - 4)" << endl;
    cout << "\t First multiply everything inside with whatever is outside " << endl;
    cout << "\t +1(r^2 + 3t^2 + 9) -1(2r^2 + 3t^2 - 4)" << endl;
    cout << "\t r^2 + 3t^2 + 9 -2r^2 -3t^2 + 4 " << endl;
    cout << "\t Rearrange: r^2 -2r^2 + 3t^2 -3t^2 + 9 + 4" << endl;
    cout << "\t Add terms: - r^2 + 13 " << endl;
    cout << "\t Answer: 13 - r^2" << endl << endl;
    getch();
}

void algebraAndFunctions_1b(){

    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 1b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Simplify these expressions where '^' is the power of" << endl;

    cout << "[1] x^3 * x^4 " << endl;
    cout << "\t When multiplying similar terms just add the powers " << endl;
    cout << "\t Power: so 3 + 4 = 7 " << endl;
    cout << "\t Answer: x^7 " << endl << endl;
    getch();


    cout << "[18] 3a^4 * 2a^5 * a^3" << endl;
    cout << "\t Calculating the coefficient: 3 * 2 * 1 = 6 " << endl;
    cout << "\t Calculating the powers: a^4 * a^5 * a^3 = 4+5+3 = ^12 " << endl;
    cout << "\t Answer: 6a^12 " << endl << endl;
    getch();


}

void algebraAndFunctions_1c(){

    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 1c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;


    cout << "Expanding expressions and simplifying where possible: " << endl;

    cout << "\t 6(4x + 3) " << endl;
    cout << "\t Basically we can expand the expression by multiplying " << endl;
    cout << "\t each term inside the bracket with the term outside it." << endl;
    cout << "\t First term: 6*4x = 24x " << endl;
    cout << "\t Second term: 6*3  = 18 " << endl;
    cout << "\t Answer: 24x + 18 " << endl << endl;
    getch();

    cout << "[20] 3x^2(2x+1) -5x^2(3x-4)" << endl;
    cout << "\t 3x^2*2x +3x^2*1 -5x^2*3x -5x^2*-4 " << endl;
    cout << "\t = 6x^3 + 3x^2 -15x^3 +20x^2" << endl;
    cout << "\t = 6x^3 -15x^3 + 3x^2 + 20x^2" << endl;
    cout << "\t = -9x^3 + 23x^2 " << endl;
    cout << "\t Answer: 23x^2 -9x^3 " << endl << endl;
    getch();
}

void algebraAndFunctions_1d(){

    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 1d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;


    cout << "Factorising expressions completely " << endl << endl;
    cout << "[1] 4x + 8 " << endl;
    cout << "\t What is the common factor of 4x + 8 ?" << endl;

    // Check for the input, keep repeating until the user inputs the correct answer
    int nCommonFactor;
    while(nCommonFactor != 4){
        cin >> nCommonFactor;
        if (nCommonFactor != 4){
            cout << "\t Incorrect." << endl;
        }else{
            cout << "\t Correct, the answer is 4." << endl;
        }
    }

    cout << "\t Press a key to continue" << endl;
    // wait for the user to press something before continuing
    getch();

    cout << "\t What is the factorised version?" << endl;

    // Check if user answers correct factorised version
    string strFactorisedVersion;
    bool done = false;
    while(done == false){
        getline(cin, strFactorisedVersion);

        if(strFactorisedVersion == "4(x + 2)"){
            cout << "\t Correct the factorised version is 4(x + 2) " << endl;
            done = true;
        }
        else{
            cout << "\t Incorrect, make sure the format is like: 1(x + 9)" << endl;
        }
    }

    /*
        Question 24
    */
    cout << "[24] 12y^2 - 4yx " << endl;
    cout << "\t Common factor = 4y " << endl;
    cout << "\t Answer: 4y(3y - x) " << endl << endl;
    getch();

}

void algebraAndFunctions_1e(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 1e --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Factorising quadratic expressions. " << endl;
    cout << "\t Factorise: 6x^2 + 9x " << endl;
    cout << "\t Common Factor: 3x" << endl;
    cout << "\t Answer: 3x(2x + 3)" << endl << endl;
    getch();

    cout << "Factorise x^2 - 5x - 6 in the form ax^2 + bx + c where a, b and c are constants and a != 0 " << endl;
    cout << "\t a = 1, b = -6, c = -6" << endl;
    cout << "\t workout ac = 1*-6 = -6 " << endl;
    cout << "\t So, x^2 -5x + 6 = x^2 + x -6x -6 " << endl;
    cout << "\t workout two factors of ac to give you b" << endl;
    cout << "\t there are -6 and +1 = -5" << endl;
    cout << "\t rewrite bx using these two factors" << endl;
    cout << "\t Factorise first two terms and last two terms " << endl;
    cout << "\t x(x+1)-6(x+1) " << endl;
    cout << "\t (x+1) is a factor of both, so take that out of the bracket and then factor the rest " << endl;
    cout << "\t Answer: (x+1)(x-6 " << endl << endl;
    getch();


    cout << "[24] 15x^2 + 42x -9" << endl;
    cout << "\t 3 is the common factor " << endl;
    cout << "\t 3(5x^2 + 14x - 3) << " << endl;
    cout << "\t Use decomposition: a = 5, b = 14, c = -3" << endl;
    cout << "\t ac: 5 * -3 = -15" << endl;
    cout << "\t workout the factors to give 14" << endl;
    cout << "\t so 15 - 1 since 15 * - 1 = -15, and 15 + -1 = 14 " << endl;
    cout << "\t = 3(5x^2 + 15x - x - 3) " << endl;
    cout << "\t = 3[5x(x+3)-1(x+3)] " << endl;
    cout << "\t (x+3) is a factor of both terms, so take that out of the bracket and then factor the rest" << endl;
    cout << "\t = 3[5x-1(x+3)]" << endl;
    cout << "\t Answer: = 3(5x-1)(x+3) " << endl << endl;
    getch();


    cout << "Reminder: Difference of two squares:" << endl;
    cout << "\t x^2 - y^2 = (x+y)(x-y) " << endl << endl;
    getch();
}

void algebraAndFunctions_1fa(){

    cout << "----------------------------------------------------" << endl;
    cout << "------------------- Section 1fa --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Extending the rule of indices to all rational exponents " << endl;

    cout << "[1a] x^3 / x^-2 " << endl;
    cout << "\t When dividing subtract the powers instead. " << endl;
    cout << "\t Powers: 3 - -2 = ^5" << endl;
    cout << "\t Answer: is x^5" << endl << endl;
    getch();


    cout << "[1c] x^3/2 * x^5/2" << endl;
    cout << "\t Powers: 3/2 + 5/2 = 3 + 5 /2 = 8/2 = ^4" << endl;
    cout << "\t Answer = x^4" << endl << endl;
    getch();

    cout << "[1i] 3x^4 * 2x^-5" << endl;
    cout << "\t x terms: 3x * 2x = 6x " << endl;
    cout << "\t Powers: ^4 + -^5 = ^-1" << endl;
    cout << "\t Answer = 6x^-1" << endl << endl;
    getch();
}

void algebraAndFunctions_1fb(){
    cout << "----------------------------------------------------" << endl;
    cout << "------------------- Section 1fb --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Evaluate" << endl;
    cout << "[2a] 25^1/2 " << endl;
    cout << "\t Using x^1/m = m^vx (m is above the square root in this instance, and v is square root symbol.) " << endl;
    cout << "\t When you take a square root, the answer can be positive or negative " << endl;
    cout << "\t Answer: 2^v25 = + or - 5 " << endl << endl;
    getch();

    // Tips
    cout << "We can take the power of a half as the square root. " << endl << endl;
    getch();
    cout << "The power of a third as a cubic root and so on. " << endl << endl;
    getch();

    cout << "[2c] 27^1/3 " << endl;
    cout << "\t a power of a third is the cubic root, so the cubic root of 27" << endl;
    cout << "\t Answer: 3, as 3*3*3 = 27" << endl << endl;
    getch();
}

void algebraAndFunctions_1g(){
    cout << "----------------------------------------------------" << endl;
    cout << "------------------- Section 1g ---------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "We can rewrite numbers exactly using surds" << endl << endl;
    getch();

    cout << "Reminder: Where v is equal to the square root sign. "  << endl  << endl;
    getch();

    cout << "\t The surd v28 can be written as v(2x14) as v(2x2x7)" << endl;
    cout << "\t The part can be written as v(2x2) = v4 = 2" << endl;
    cout << "\t Leaving us with the answer 2v7 since the v7 cannot be simplified further" << endl << endl;
    getch();
}

void algebraAndFunctions_1h(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 1h --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You rationalise denominator of a fraction when it is a surd" << endl << endl;

    cout << "Rules of rationalising surds are as follows: (Where v is the square root symbol)" << endl;
    cout << "\t Rule 1: Fractions in the form v 1/a, multiply the top and bottom by va" << endl;
    cout << "\t Rule 2: Fractions in the form 1/a+vb multiply the top and bottom by a - vb" << endl;
    cout << "\t Rule 3: Fractions in the form 1/a-vb multiply the top and bottom by a + vb" << endl << endl;
    getch();

    // Example on how to rationalise using rule 1
    cout << "Rationalising 1/v3 (where v is the square root symbol)" << endl;
    cout << "\t Multiply both top and bottom by v3" << endl;
    cout << "\t We then get 1*v3/v3*v3 " << endl;
    cout << "\t This is then simplified as 1v3/3" << endl;
    cout << "\t We have now rationalised the denominator." << endl << endl;
    getch();

    // My examples
    cout << "Where v is the square root" << endl;
    cout << "\t Rationalise 5v2/v8-v7" << endl;
    cout << "\t Here we can use the rule 3. We need to multiply top and bottom by v8 + v7" << endl;
    cout << "\t = 5v2(v8+v7)/(v8-v7)(v8+v7)" << endl;
    cout << "\t = 5v16 + 5v14 / 8 + v56 -7 - v56" << endl;
    cout << "\t = 5v4*v4 + 5v14 / 1" << endl;
    cout << "\t = 20 + 5v14" << endl;
    cout << "\t 5 is factor of both" << endl;
    cout << "\t Simplified answer is 4(5 + v14)" << endl << endl;
    getch();
}

