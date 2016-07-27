#include <iostream>

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
    3*ab - 3*ac + 3*a - 7*ab + 5*ac

    // Rearrange
    3*a + 3*ab - 7*ab - 3*ac + 5*ac

    // Simplified to 3a - 4ab + 2ac
    3*a - 4*ab + 2*ac



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


int main()
{

    cout << "Welcome to chapter 1 A Level Mathematics in C++" << endl;

    return 0;
}
