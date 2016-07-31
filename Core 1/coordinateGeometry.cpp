#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "coordinateGeometry.h"
using namespace std;


void coordinateGeometry_5a(){

    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 5a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    /*
        Question 1a
    */
    cout << "[1] Find the gradient of these lines" << endl;
    cout << "\t 1a) y = -2x + 5" << endl;
    cout << "\t We can find the gradient by 'y = mx + c' where 'm' is the gradient" << endl;
    cout << "\t The gradient must be -2" << endl << endl;
    getch();

    /*
        Question 1h
    */
    cout << "\t 1h) 10x - 5y + 1 = 0" << endl;
    cout << "\t Write the equation in the form of y = mx + c" << endl;
    cout << "\t 5y = 10x + 1" << endl;
    cout << "\t y = 10/5x + 1/5" << endl;
    cout << "\t y = 2x + 1/5" << endl;
    cout << "\t So the gradient is 2" << endl << endl;
    getch();

    /*
        Question 2a
    */
    cout << "[2] These lines intercept the y axis at 0, c - find c " << endl << endl;

    cout << "\t 2a) y = -x + 4 " << endl;
    cout << "\t y = mx + c" << endl;
    cout << "\t m = -1, c = 4" << endl;
    cout << "\t So c = 4" << endl << endl;
    getch();

    /*
        Question 2h
    */
    cout << "\t 2h) 4x -5y - 10 = 0" << endl;
    cout << "\t Rearrange to y = mx + c" << endl;
    cout << "\t 5y = 4x - 10" << endl;
    cout << "\t divide each term by 5" << endl;
    cout << "\t y = 4/5x - 2" << endl;
    cout << "\t c = -2" << endl << endl;
    getch();
    /*
        Question 3
    */
    cout << "[3] Write these lines in the form of ax + by + c = 0" << endl << endl;

    cout << "\t 3b) y = 3x - 2" << endl;
    cout << "\t Simple rearranging, move y to the RHS" << endl;
    cout << "\t Answer: 3x - y - 2 = 0" << endl << endl;
    getch();

    cout << "\t 3i) y = -6x -2/3" << endl;
    cout << "\t Rearrange to LHS: y + 6x + 2/3 = 0" << endl;
    cout << "\t Rearrange to ax + by + c: 6x + y + 2/3 = 0" << endl;
    cout << "\t Multiply by 3 to remove fractions" << endl;
    cout << "\t Answer: 18x + 3y + 2 = 0" << endl << endl;
    getch();

    /*
        Question 4
    */
    cout << "[4] A line is a parallel to the line y = 5x + 8, and it's intercept is (0,3). \nWrite down the equation of the line." << endl;
    cout << "\t If a line is parallel then it's gradient must be the same so m=5." << endl;
    cout << "\t If the intercept is (0,3) then c is = 3." << endl;
    cout << "\t So the equation must be y = 5x + 3" << endl << endl;
    getch();

    /*
        Question 5
    */
    cout << "[5] A line is parallel to the line y = -2/5x + 1, intercept (0,-4). \nWrite the equation in the form ax + by + c = 0" << endl;
    cout << "\t keywords: Parallel = same gradient m = -2/5" << endl;
    cout << "\t intercept (0,-4) so c = -4" << endl;
    cout << "\t equation: y = -2/5x - 4" << endl;
    cout << "\t rearrange to form: y + 2/5x + 4 = 0" << endl;
    cout << "\t multiply out fractions -> *5: 5y + 2x + 20 = 0" << endl;
    cout << "\t Answer: 2x + 5y + 20 = 0 " << endl << endl;
    getch();

    /*
        Question 8
    */
    cout << "[8] The line y = 6x - 18 meets the x-axis at the point P. workout the cordinates of P. " << endl;
    cout << "\t y must be 0 when the line meets the x-axis so workout 6x - 18 = 0" << endl;
    cout << "\t Rearrange: 6x = 18" << endl;
    cout << "\t Divide by 6: x = 3" << endl;
    cout << "\t x = 3, y = 0 -> coordinates of P(3,0)" << endl << endl;
    getch();


    /*
        Question 10
    */
    cout << "[10] The line 5x - 4y + 20 = 0 and meets the y axis at point A and the x axis at point B. " << endl;
    cout << "\t x must be 0 when the line meets the y-axis -> 5(0) -4y + 20 = 0" << endl;
    cout << "\t Rearrange: 20 = 4y" << endl;
    cout << "\t Divide by 4: y = 5" << endl;
    cout << "\t Coordinates of A(0, 5)" << endl << endl;
    cout << "\t y must be 0 when the line meets the x-axis -> 5x -4(0) + 20 = 0" << endl;
    cout << "\t Rearranged: 5x = -20" << endl;
    cout << "\t Divide by 5: x = -4" << endl;
    cout << "\t Coordinates of B(-4, 0)" << endl << endl;
}

void coordinateGeometry_5b(){

    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 5b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;
    /*
        Question 1
    */
    cout << "[1] Workout the gradient of the line joining these pair of points: " << endl;
    cout << "\t 1a) (4, 2), (6,3) " << endl;
    cout << "\t Find the gradient by m = (y2-y1)/(x2-x1)" << endl;
    cout << "\t m = (3-2)/(6-4) or 1/2" << endl;
    cout << "\t We can check the answer: " << workoutGradient(4, 2, 6, 3) << endl << endl;
    getch();

    cout << "\t 1n) (p, p^2), (q, q^2)" << endl;
    cout << "\t m = (y2-y1)(x2-x1)" << endl;
    cout << "\t m = (q^2-p^2)/(q-p)" << endl;
    cout << "\t here I can spot a difference between squares " << endl;
    cout << "\t (q+p)(q-p)/(q-p)" << endl;
    cout << "\t take out the (q-p) on both sides" << endl;
    cout << "\t answer: q + p" << endl << endl;
    getch();

    /*
        Question 2
    */
    cout << "[2] The line joining (3, -5),(6,a) has m =4. Workout a" << endl;
    cout << "\t 4 = (a--5)/(6-3)" << endl;
    cout << "\t 4 = (a+5)/3" << endl;
    cout << "\t multiply both sides by 3" << endl;
    cout << "\t 12 = a + 5" << endl;
    cout << "\t move the 5 to the LHS" << endl;
    cout << "\t answer: a = 7" << endl << endl;
    getch();


}

float workoutGradient(float x1, float y1, float x2, float y2){

    float xDifference = x2-x1;
    float yDifference = y2-y1;
    float gradient = yDifference / xDifference;
    return gradient;
}


void coordinateGeometry_5c(){

    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 5c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;
    /*
        Question 1
    */
    cout << "[1] Find the equation of the line which gradient m that passes through the point (x1, y1) when: " << endl;
    cout << "\t 1a) m = 2 and (x1, y1) = (2, 5)" << endl;
    cout << "\t we can use y-y1= m(x-x1)" << endl;
    cout << "\t y - 5 = 2(x-2)" << endl;
    cout << "\t y - 5 = 2x - 4" << endl;
    cout << "\t answer: y = 2x + 1" << endl << endl;
    getch();


    /*
        Question 2
    */
    cout << "[2] The line y = 4x - 8 meets the x-axis at A. \n Find the equation of the line with gradient 3 that passes through A." << endl;
    cout << "\t m = 3, coordinates of A can be found when Y = 0" << endl;
    cout << "\t Finding x: 0 = 4x - 8" << endl;
    cout << "\t Finding x: 4x = 8, x = 8/4=, x = 2" << endl;
    cout << "\t Coordinates of A: (2, 0)" << endl;
    cout << "\t Use: y-y1=m(x-x1)" << endl;
    cout << "\t y-0=3(x-2)" << endl;
    cout << "\t answer: y = 3x - 6" << endl << endl;
    getch();
}

void coordinateGeometry_5d(){

    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 5d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;
    /*
        Question 1
    */
    cout << "[1] Find the equation that passes through the points: " << endl;
    cout << "\t 1a) (2,4) and (3,8) " << endl;
    cout << "\t use: y-y1/y2-y1 = x-x1/x2-x1" << endl;
    cout << "\t y-4/8-4 = x-2/3-2" << endl;
    cout << "\t y-4/4 = x-2/1" << endl;
    cout << "\t multiply both sides by 4" << endl;
    cout << "\t y - 4 = 4x-8" << endl;
    cout << "\t y = 4x - 4" << endl << endl;
    getch;

    /*
        Question 1b
    */
    cout << "\t 1x) (5, 4) and (9, 2)" << endl;
    cout << "\t using gradient instead " << endl;
    cout << "\t use: m = y2-y1/x2-x1" << endl;
    cout << "\t m = (2-4)/(9-5)" << endl;
    cout << "\t m = -2/4 = -1/2" << endl;
    cout << "\t use: y-y1=m(x-x1)" << endl;
    cout << "\t y-4=-1/2(x-5)" << endl;
    cout << "\t multiply both sides by 2 to remove fraction " << endl;
    cout << "\t 2y-8=-1(x-5)" << endl;
    cout << "\t 2y-8=-x + 5" << endl;
    cout << "\t 2y=-x+13" << endl;
    cout << "\t divide both sides by 2" << endl;
    cout << "\t y = -1/2x + 13/2" << endl << endl;
    getch();

    cout << "[5] The line y=2x-10 meets x-axis at A. y=-2x+4 meets y axis at B. " << endl;
    cout << "Find the equation joining the two points" << endl;
    cout << "\t First find the coordinates of A,B" << endl;
    cout << "\t A meets at x-axis so y must be 0" << endl;
    cout << "\t 0=2x-10, 2x = 10, x = 5, so A(5,0)" << endl;
    cout << "\t B meets at y-axis so x must be 0" << endl;
    cout << "\t y=-2(0)+4 = y=4, so B(0, 4)" << endl;
    cout << "\t find the gradient " << endl;
    cout << "\t use: m = y2-y1/x2-x1" << endl;
    cout << "\t m = 4-0/0-5 = -4/5" << endl;
    cout << "\t use: y-y1=m(x-x1)" << endl;
    cout << "\t y-0=-4/5(x-5) " << endl;
    cout << "\t multiply both sides by 5" << endl;
    cout << "\t 5y=-4(x-5)" << endl;
    cout << "\t 5y -4x + 20 " << endl;
    cout << "\t divide both sides by 5" << endl;
    cout << "\t answer: y = -4/5x + 4" << endl << endl;
    getch();
}

void coordinateGeometry_5e(){

    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 5e --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    /*
        Question 1
    */
    cout << "[1] Workout if the line is parallel, perpendicular or neither " << endl;
    cout << "\t 1a) (1) y=4x+2 and (2) y=-1/4x-7" << endl;
    cout << "\t the gradients are: 4 and -1/4, so the lines are perpendicular because the product of their gradients is -1." << endl << endl;
    getch();

    cout << "\t 1b) (1) y=2/3x-1 and (2) y=2/3x-11" << endl;
    cout << "\t the gradients are: 2/3 and 2/3" << endl;
    cout << "\t these lines are parallel because the gradients are equal." << endl << endl;
    getch();

    cout << "\t 1c) (1) y=1/5x+9 and (2) y=5x+9" << endl;
    cout << "\t the gradients are: 1/5 and 5" << endl;
    cout << "\t the lines are neither because the gradients are not the same, and product 1/5*5 = 1" << endl << endl;
    getch();

}
