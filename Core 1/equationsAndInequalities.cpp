#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "equationsAndInequalities.h"
using namespace std;


void equationsAndInequalities_3a(){

    cout << "Solving simultaneous equations by elimination." << endl;

    /*
        Question 1
    */
    cout << "Question 3a 1: " << endl;
    cout << "(1) 2x - y = 6" << endl;
    cout << "(2) 4x + 3y = 22" << endl;
    cout << "I am going to try an eliminate y first" << endl;
    cout << "Multiply the first equation by 3 to get -3y" << endl;
    cout << "(1) 6x - 3y = 18" << endl;
    cout << "(2) 4x + 3y = 22" << endl;
    cout << "Now add both equations together " << endl;
    cout << "6x + 4x -3y + 3y = 18 + 22" << endl;
    cout << "10x = 40" << endl;
    cout << "Divide by 10 to get x" << endl;
    cout << "x = 4" << endl;
    cout << "Now use this information to find y" << endl;
    cout << "y = 2x - 6" << endl;
    cout << "y = 2(4) - 6 = 8 - 6" << endl;
    cout << "y = 2 " << endl;
    cout << "So x = 4,  y = 2" << endl;
    cout << "" << endl;
}

void equationsAndInequalities_3b(){
    cout << "Solving these equations by substitution " << endl;

    /*
        Question 1
    */
    cout << "Question 3b 1: " << endl;
    cout << "(1) x + 3y = 11" << endl;
    cout << "(2) 4x - 7y = 6" << endl;
    cout << "We can use substitute by finding an equation for x or y " << endl;
    cout << "In equation (1) x = 11 - 3y" << endl;
    cout << "Now we can substitute every x in equation (2) with this" << endl;
    cout << "(2) 4(11-3y) -7y = 6" << endl;
    cout << "(2) 44 -12y -7y = 6" << endl;
    cout << "(2) 38 = 19y" << endl;
    cout << "(2) y = 38/19 " << endl;
    cout << "(2) y = 2" << endl;
    cout << "Now substitute y = 2 into any equation" << endl;
    cout << "(1) x + 3(y) = 11" << endl;
    cout << "(1) x + 6 = 11" << endl;
    cout << "(1) x = 5" << endl;
    cout << "So x = 5, y = 2" << endl;
    cout << "" << endl;
}

void equationsAndInequalities_3c(){

    cout << "Solving equations with one being linear the other quadratic." << endl;

    /*
        Question 1
    */
    cout << "Solve the simultaneous equations" << endl;
    cout << "(1) x + y = 11" << endl;
    cout << "(2) xy = 30" << endl;
    cout << "Step 1: x = 11 - y" << endl;
    cout << "Substitute: (11-y)y = 30" << endl;
    cout << "Expand: 11y-y^2 = 30" << endl;
    cout << "Rearrange: y^2 - 11y + 30 = 0" << endl;
    cout << "Factorise: (y - 5)(y - 6) = 0" << endl;
    cout << "y=5 or y=6" << endl;
    cout << "x = 11-5 = 6" << endl;
    cout << "x = 11-6 = 5" << endl;
    cout << "Solutions: x=6,y=5 : x=5,y=6" << endl;
    cout << "" << endl;
}

void equationsAndInequalities_3d(){

    cout << "1. Find the set of vales for x" << endl;

    /*
        Question 1 a
    */
    cout << "2x - 3 < 5" << endl;
    cout << "2x < 8" << endl;
    cout << "x < 8/2" << endl;
    cout << "x < 4" << endl;

    /*
        Question 2 a
    */

    cout << "2. Find the set of values for which " << endl;

    cout << "2(x-3) >= 0 " << endl;
    cout << "2x - 6 >= 0" << endl;
    cout << "2x >= 6" << endl;
    cout << "x >= 6/2" << endl;
    cout << "x >= 3" << endl;

    /*
        Question 3 a
    */
    cout << "3. Find the set of values for which " << endl;

    cout << "3(x-2) > x-4 and 4x+12 > 2x+17" << endl;
    cout << "(1) 3x - 6 > x - 4" << endl;
    cout << "(1) 4x > 2" << endl;
    cout << "(1) x > 2/4 = 1/2" << endl;
    cout << "(2) 4x + 12 > 2x + 17" << endl;
    cout << "(2) 2x > 5" << endl;
    cout << "(2) x > 5/2" << endl;
    cout << "To satisfy both statements, it must be x > 5/2" << endl;

    /*
        Question 3 e
    */

    cout << "3x + 8 <= 20 and 2(3x-7) >= x + 6" << endl;

    // first part
    cout << "(1) 3x <= 12" << endl;
    cout << "(1) x <= 12/3 = 4" << endl;
    cout << "(1) x <= 4" << endl;

    // second part
    cout << "(2) 6x - 14 >= x + 6" << endl;
    cout << "(2) 5x >= 20" << endl;
    cout << "(2) x >= 4" << endl;

    cout << "In order to satisfy both, x must be only one value and that is x = 4" << endl;
}

void equationsAndInequalities_3e(){

    cout << "Find the set of values of x for which" << endl;

    /*
        Question 1 a
    */

    cout << "x^2 - 11x + 24 < 0" << endl;
    cout << "Two numbers which multiply to give 24 and add to give 11 are 8, 3" << endl;
    cout << "Factorise where possible: (x-8)(x-3) = 0" << endl;
    cout << "So x = 8 or x = 3" << endl;
    cout << "We can use a graph or a table to decide where the values < 0 are" << endl;

    // Table of values between x=1, x=10
    for(int i =1; i < 10; i++){
        cout << "X: " << i << " Y: " << equation1a(i) << endl;
    }

    cout << "Looking at the table of values we can see that the values where y is < 0" << endl;
    cout << "Is when X = 3 and X = 8, so the final set of values must be 3 < x < 8" << endl;
    cout << "When x is 8, y is exactly 0 so it must be less than 8." << endl;
    cout << "When x is 3, y is exactly 0 so it must be greater than 3" << endl;

}

int equation1a(int x){
    // equation y=x^2 - 11x + 24
    return x*x -11*x + 24;
}
