#include <iostream>
#include <string>
#include<conio.h>

using namespace std;

void simplifyExpressions_1a()
{

    int x;
    int y;

    // Simplify this expression by collecting like terms:
    // [1] 4x - 5y + 3x + 6y
    4*x - 5*y + 3*x + 6*y;

    // We can simplify this by - rearranging the expression
    4*x + 3*x - 5*y + 6*y;

    // Then do simple addition and we get 7x + y
    7*x + y;


    int a;
    int ab;
    int ac;

    // [4] 3ab - 3ac + 3a - 7ab + 5ac
    3*ab - 3*ac + 3*a - 7*ab + 5*ac;

    // Rearrange
    3*a + 3*ab - 7*ab - 3*ac + 5*ac;

    // Simplified to 3a - 4ab + 2ac
    3*a - 4*ab + 2*ac;



    // [18] (r² + 3t² + 9) - (2r² + 3t² - 4)

    // First multiply everything inside with whatever is outside
    // +1(r² + 3t² + 9) -1(2r² + 3t² - 4)

    // r² + 3t² + 9 -2r² -3t² + 4

    // Now rearrange
    // r² -2r² + 3t² -3t² + 9 + 4

    // Add terms
    // - r² + 13

    // Rearrange
    // 13 - r²
}

void simplifyExpressions_1b(){


    // Simplify these expressions where '^' is the power of

    // [1] x^3 * x^4

    // When multiplying similar terms just add the powers
    // so 3 + 4 = 7

    // The answer is x^7


    // [18] 3a^4 * 2a^5 * a^3


    // Calculating the coefficient
    // 3 * 2 * 1 = 6

    // Calculating the powers
    // a^4 * a^5 * a^3 = 4+5+3 = ^12

    // The answer is 6a^12


}

void simplifyExpressions_1c(){

    // Expanding expressions and simplifying where possible

    // 6(4x + 3)

    // Basically we can expand the expression by
    // multiplying each term inside the bracket with the term outside it

    // So
    // 6*4x = 24x
    // 6*3  = 18
    // = 24x + 18


    // Expand and simplify where possible
    // [20] 3x^2(2x+1) -5x^2(3x-4)

    // 3x^2*2x +3x^2*1 -5x^2*3x -5x^2*-4
    // = 6x^3 + 3x^2 -15x^3 +20x^2
    // = 6x^3 -15x^3 + 3x^2 + 20x^2
    // = -9x^3 + 23x^2
    // = 23x^2 -9x^3
}

void simplifyExpressions_1d(){

    cout << "Factorising expressions completely " << endl;
    cout << "[1] 4x + 8 " << endl;
    cout << "What is the common factor of 4x + 8 ?" << endl;

    // Check for the input, keep repeating until the user inputs the correct answer
    int nCommonFactor;
    while(nCommonFactor != 4){
        cin >> nCommonFactor;
        if (nCommonFactor != 4){
            cout << "Incorrect." << endl;
        }else{
            cout << "Correct the answer is 4." << endl;
        }
    }

    cout << "Press a key to continue" << endl;
    // wait for the user to press something before continuing
    getch();

    cout << "What is the factorised version?" << endl;

    // Check if user answers correct factorised version
    string strFactorisedVersion;
    bool done = false;
    while(done == false){
        getline(cin, strFactorisedVersion);

        if(strFactorisedVersion == "4(x + 2)"){
            cout << "Correct the factorised version is 4(x + 2) " << endl;
            done = true;
        }
        else{
            cout << "Incorrect, make sure the format is like: 1(x + 9)" << endl;
        }
    }


    // [24] 12y^2 - 4yx
    // Common factor = 4y
    // 4y(3y - x)
}

void simplifyExpressions_1e(){

    // Factorising quadratic expressions

    // Factorise 6x^2 + 9x
    // 3x is the common factor
    // 3x(2x + 3)

    // Factorise x^2 - 5x - 6 in the form ax^2 + bx + c where a, b and c are constants and a != 0
    // a = 1, b = -6, c = -6
    // workout ac = 1*-6 = -6
    // So, x^2 -5x + 6 = x^2 + x -6x -6
    // workout two factors of ac to give you b
    // there are -6 and +1 = -5
    // rewrite bx using these two factors
    // Factorise first two terms and last two terms
    // x(x+1)-6(x+1)
    // (x+1) is a factor of both, so take that out of the bracket and then factor the rest
    // = (x+1)(x-6)


    // [24] 15x^2 + 42x -9
    // 3 is the common factor
    // 3(5x^2 + 14x - 3)
    // Use decomposition
    // 5 * -3 = -15
    // workout the factors to give 14
    // so 15 - 1 since 15 * - 1 = -15, and 15 + -1 = 14
    // = 3(5x^2 + 15x - x - 3)
    // = 3[5x(x+3)-1(x+3)]
    // We can take out the (x+3)
    // = 3[5x-1(x+3)]
    // So the answer is
    // = 3(5x-1)(x+3)


}

int main()
{

    cout << "Welcome to chapter 1 A Level Mathematics in C++" << endl;
    simplifyExpressions_1d();
    return 0;
}
