#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "equationsAndInequalities.h"
using namespace std;


void equationsAndInequalities_3a(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 3a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Solving simultaneous equations by elimination." << endl << endl;
    getch();

    /*
        Question 1
    */
    cout << "[1] Two equations" << endl;
    cout << "\t (1) 2x - y = 6" << endl;
    cout << "\t (2) 4x + 3y = 22" << endl;
    cout << "\t I am going to try an eliminate y first" << endl;
    cout << "\t Multiply the first equation by 3 to get -3y" << endl;
    cout << "\t (1) 6x - 3y = 18" << endl;
    cout << "\t (2) 4x + 3y = 22" << endl;
    cout << "\t Now add both equations together " << endl;
    cout << "\t 6x + 4x -3y + 3y = 18 + 22" << endl;
    cout << "\t 10x = 40" << endl;
    cout << "\t Divide by 10 to get x" << endl;
    cout << "\t x = 4" << endl;
    cout << "\t Now use this information to find y" << endl;
    cout << "\t y = 2x - 6" << endl;
    cout << "\t y = 2(4) - 6 = 8 - 6" << endl;
    cout << "\t y = 2 " << endl;
    cout << "\t So x = 4,  y = 2" << endl << endl;
    getch();
}

void equationsAndInequalities_3b(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 3b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Solving these equations by substitution " << endl << endl;
    getch();

    /*
        Question 1
    */
    cout << "[1] Two equations (1), (2) " << endl;
    cout << "\t (1) x + 3y = 11" << endl;
    cout << "\t (2) 4x - 7y = 6" << endl;
    cout << "\t We can use substitute by finding an equation for x or y " << endl;
    cout << "\t In equation (1) x = 11 - 3y" << endl;
    cout << "\t Now we can substitute every x in equation (2) with this" << endl;
    cout << "\t (2) 4(11-3y) -7y = 6" << endl;
    cout << "\t (2) 44 -12y -7y = 6" << endl;
    cout << "\t (2) 38 = 19y" << endl;
    cout << "\t (2) y = 38/19 " << endl;
    cout << "\t (2) y = 2" << endl;
    cout << "\t Now substitute y = 2 into any equation" << endl;
    cout << "\t (1) x + 3(y) = 11" << endl;
    cout << "\t (1) x + 6 = 11" << endl;
    cout << "\t (1) x = 5" << endl;
    cout << "\t So x = 5, y = 2" << endl << endl;
    getch();
}

void equationsAndInequalities_3c(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 3c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Solving equations with one being linear the other quadratic." << endl << endl;
    getch();

    /*
        Question 1
    */
    cout << "Solve the simultaneous equations" << endl;
    cout << "\t (1) x + y = 11" << endl;
    cout << "\t (2) xy = 30" << endl;
    cout << "\t Step 1: x = 11 - y" << endl;
    cout << "\t Substitute: (11-y)y = 30" << endl;
    cout << "\t Expand: 11y-y^2 = 30" << endl;
    cout << "\t Rearrange: y^2 - 11y + 30 = 0" << endl;
    cout << "\t Factorise: (y - 5)(y - 6) = 0" << endl;
    cout << "\t y=5 or y=6" << endl;
    cout << "\t x = 11-5 = 6" << endl;
    cout << "\t x = 11-6 = 5" << endl;
    cout << "\t Solutions: x=6,y=5 : x=5,y=6" << endl << endl;
    getch();
}

void equationsAndInequalities_3d(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 3d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Find the set of vales for x" << endl << endl;
    getch();

    /*
        Question 1
    */
    cout << "[1] 2x - 3 < 5" << endl;
    cout << "\t 2x < 8" << endl;
    cout << "\t x < 8/2" << endl;
    cout << "\t x < 4" << endl << endl;
    getch();

    /*
        Question 2
    */
    cout << "[2] Find the set of values for which " << endl;
    cout << "\t 2(x-3) >= 0 " << endl;
    cout << "\t 2x - 6 >= 0" << endl;
    cout << "\t 2x >= 6" << endl;
    cout << "\t x >= 6/2" << endl;
    cout << "\t x >= 3" << endl << endl;
    getch();

    /*
        Question 3 a
    */
    cout << "[3] Find the set of values for which " << endl;
    cout << "\t 3(x-2) > x-4 and 4x+12 > 2x+17" << endl;
    cout << "\t (1) 3x - 6 > x - 4" << endl;
    cout << "\t (1) 4x > 2" << endl;
    cout << "\t (1) x > 2/4 = 1/2" << endl;
    cout << "\t (2) 4x + 12 > 2x + 17" << endl;
    cout << "\t (2) 2x > 5" << endl;
    cout << "\t (2) x > 5/2" << endl;
    cout << "\t To satisfy both statements, it must be x > 5/2" << endl << endl;
    getch();

    /*
        Question 3 e
    */
    cout << "[3e] 3x + 8 <= 20 and 2(3x-7) >= x + 6" << endl;
    cout << "\t (1) 3x <= 12" << endl;
    cout << "\t (1) x <= 12/3 = 4" << endl;
    cout << "\t (1) x <= 4" << endl;
    cout << "\t (2) 6x - 14 >= x + 6" << endl;
    cout << "\t (2) 5x >= 20" << endl;
    cout << "\t (2) x >= 4" << endl;
    cout << "\t In order to satisfy both, x must be only one value and that is x = 4" << endl << endl;
    getch();
}

void equationsAndInequalities_3e(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 3e --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Find the set of values of x for which" << endl << endl;
    getch();

    /*
        Question 1 a
    */
    cout << "[1a] x^2 - 11x + 24 < 0" << endl;
    cout << "\t Two numbers which multiply to give 24 and add to give 11 are 8, 3" << endl;
    cout << "\t Factorise where possible: (x-8)(x-3) = 0" << endl;
    cout << "\t So x = 8 or x = 3" << endl;
    cout << "\t We can use a graph or a table to decide where the values < 0 are" << endl << endl;

    // Table of values between x=1, x=10
    for(int i =1; i < 10; i++){
        cout << "\t X: " << i << " Y: " << equation3e1a(i) << endl;
    }
    cout << " " << endl;

    cout << "\t Looking at the table of values we can see that the values where y is < 0" << endl;
    cout << "\t Is when X = 3 and X = 8, so the final set of values must be 3 < x < 8" << endl;
    cout << "\t When x is 8, y is exactly 0 so it must be less than 8." << endl;
    cout << "\t When x is 3, y is exactly 0 so it must be greater than 3" << endl << endl;

}

int equation3e1a(int x){
    // equation y=x^2 - 11x + 24
    return x*x -11*x + 24;
}
