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
}

int main()
{

    cout << "Welcome to chapter 1 A Level Mathematics in C++" << endl;

    return 0;
}
