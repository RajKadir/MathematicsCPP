#include <iostream>
#include <conio.h>
#include <math.h>       /* sin */
#include "coordinateGeometryInTheXYPlane.h"

using namespace std;

void coordinateGeometryInTheXYPlane_4a(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 4a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You can find the mid-point of a line joining (x1, y1)" << endl;
    cout << "and (x2, y2) by using the formula: (x1+x2/2 , y1+y2/2)" << endl << endl;
    getch();

    cout << "[1] Find the mid-point of the line joining these pair of points: " << endl;
    cout << "\t 1a) (4,2),(6,8)" << endl;
    cout << "\t = (4+6/2, 2+8/2)" << endl;
    cout << "\t = (10/2, 10/2)" << endl;
    cout << "\t mid-point: (5, 5)" << endl << endl;
    getch();

    cout << "\t 1l) (a + b, 2a - b), (3a - b, -b)" << endl;
    cout << "\t = (a + b + 3a - b)/2, (2a-b-b)/2" << endl;
    cout << "\t = 4a/2, 2a-2b/2" << endl;
    cout << "\t mid-point: (2a, a - b)" << endl << endl;
    getch();

    cout << "[2] The line PQ is a diameter of a circle, where P and Q are (-4, 6) and (7,8) respectively." << endl;
    cout << "Find the coordinates of the centre of the circle." << endl;
    cout << "\t P(-4, 6), Q(7, 8)" << endl;
    cout << "\t = (-4 + 7)/2 , (6 + 8)/2 " << endl;
    cout << "\t = 3/2, 14/2" << endl;
    cout << "\t mid-point: (3/2, 7)" << endl << endl;
    getch();

    cout << "[3] The line RS is a diameter of a circle \n where R and S are (4a/5, -3b/4) and (2a/5, 5b/4)" << endl;
    cout << "Find the mid-point of RS. " << endl;
    cout << "\t R(4a/5, -3b/4) S(2a/5, 5b/4)" << endl;
    cout << "\t = (4a/5 + 2a/5)/2, (-3b/4 + 5b/4)/2" << endl;
    cout << "\t = (6a/5)/2, (2b/4)/2" << endl;
    cout << "\t = 3a/5, b/4" << endl;
    cout << "\t mid-point: (3a/5, b/4)" << endl << endl;
    getch();


}

void coordinateGeometryInTheXYPlane_4b(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 4b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "[1] The line FG is a diameter of the circle centre C, where F(-2, 5) and G(2,9)." << endl;
    cout << "The line l passes through C and is perpendicular to FG." << endl;
    cout << "Find the equation of l. " << endl;

    cout << "\t First find the circle centre coordinates. " << endl;
    cout << "\t = (-2 + 2)/2, (5 + 9)/2" << endl;
    cout << "\t = midpoint: (0, 7)" << endl;
    cout << "\t Find the gradient of line FG: = y2-y1/x2-x1 = 9-5/2--2 = 4/4 = 1" << endl;
    cout << "\t The product of two perpendicular lines is -1: 1 * (-1)  = -1" << endl;
    cout << "\t Perpendicular gradient is: -1" << endl;
    cout << "\t Now use the equation with midpoint: y - y1 = m(x-x1)" << endl;
    cout << "\t = y - 7 = -1(x-0)" << endl;
    cout << "\t Answer = y = 7 - x" << endl << endl;
    getch();

}

void coordinateGeometryInTheXYPlane_4c(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 4c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You can find the distance d between (x1, y1) and (x2, y2) by using the formula: " << endl;
    cout << "\t d = v[(x2-x1)^2 + (y2 - y1)^2] where v is the square root symbol. " << endl;


    cout << "[1] Find the distance between these pair of points: " << endl;
    cout << "\t a) (0,1),(6,9)" << endl;
    cout << "\t = " << distanceBetweenPoints(0, 1, 6, 9) << endl;


    cout << "[2] The point (4, -3) lies on the circle centre (-2, 5). Find the radius of the circle. " << endl;
    cout << "\t = " << distanceBetweenPoints(4, -3, -2, 5) << endl;
}

int distanceBetweenPoints(int x1, int y1, int x2, int y2){
    // sqrt[(x2-x1)^2 + (y2-y1)^2]
    return sqrt( pow(x2-x1, 2) + pow(y2-y1, 2));
}

void coordinateGeometryInTheXYPlane_4d(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 4d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You can write the equation of a circle in the form: " << endl;
    cout << "\t (x-a)^2 + (y-b)^2 = r^2" << endl;
    cout << "\t where (a, b) is the centre and r is the radius. " << endl << endl;
    getch();

    cout << "[1] Write down the equation of these circles: " << endl;
    cout << "\t a) Centre(3,2) radius 4" << endl;
    cout << "\t = (x-3)^2 + (y-2)^2 = 4^2" << endl;
    cout << "\t = (x-3)^2 + (y-2)^2 = 16" << endl << endl;
    getch();

    cout << "\t d) Centre(2a, 7a) radius 5a" << endl;
    cout << "\t = (x-2a)^2 + (y-7a)^2 = (5a)^2" << endl;
    cout << "\t = (x-2a)^2 + (y-7a)^2 = 25a^2" << endl << endl;
    getch();

    cout << "[2] Write down the coordinates of the centre and the radius of these circles: " << endl;
    cout << "\t a) (x+5)^2 + (y-4)^2 = 9^2" << endl;
    cout << "\t here a = 5, b = -4, r = 9" << endl;
    cout << "\t centre: = (5, -4) " << endl;
    cout << "\t radius: = 9" << endl << endl;
    getch();

    cout << "\t e) (x-3v5)^2 + (y+v5)^2 = 27" << endl;
    cout << "\t where v = square root or surd" << endl;
    cout << "\t here a = -3v5, b = v5, r = sqrt(27)" << endl;
    cout << "\t centre: (-3v5, v5)" << endl;
    cout << "\t radius: " << sqrt(27) << endl << endl;
    getch();

    cout << "[3] Find the centre and radius of these circles by first writing in the form (x-a)^2 + (y-b)^2 = r^2" << endl;
    cout << "\t a) x^2 + y^2 + 4x + 9y + 3 = 0" << endl;
    cout << "\t = x^2 + 4x + y^2 + 9y = -3" << endl;
    cout << "\t here x^2 + 4x can be written as (x+2)^2 - 4: x^2 + 2x + 2x + 4 -4 = x^2 + 4x" << endl;
    cout << "\t = (x+2)^2 + (y+3)^2 - 4 - 9 = -3 " << endl;
    cout << "\t = (x+2)^2 + (y+3)^2 = + 4 + 9 - 3" << endl;
    cout << "\t = (x+2)^2 + (y+3)^2 = 10" << endl;
    cout << "\t Coordinates: (-2, -3) radius = surd10" << endl << endl;
    getch();


}

void coordinateGeometryInTheXYPlane_4e(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 4e --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "[1] Find where the circle (x-1)^2 + (y-3)^2 = 45 meets the x-axis " << endl;
    cout << "\t the circle would meet the x-axis when y = 0" << endl;
    cout << "\t (x-1)^2 + (0-3)^2 = 45" << endl;
    cout << "\t (x-1)^2 + 9 = 45" << endl;
    cout << "\t (x-1)^2 = 36" << endl;
    cout << "\t square root both sides." << endl;
    cout << "\t x - 1 = +- 6" << endl;
    cout << "\t x = 7 or x = -5" << endl;
    cout << "\t so the circle meets the x-axis at (7, 0) and (-5, 0)" << endl << endl;
    getch();


}

void coordinateGeometryInTheXYPlane_summary(){
    cout << "----------------------------------------------------" << endl;
    cout << "--------------- Summary of key points --------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "[1] The mid-point of (x1, y1) and (x2, y2) is: " << endl;
    cout << "\t (x1+x2)/2 , (y1+y2)/2" << endl << endl;
    getch();

    cout << "[2] The distance d between (x1, y1) and (x2, y2) is: " << endl;
    cout << "\t d = sqrt[(x2-x1)^2 + (y2-y1)^2]" << endl << endl;
    getch();

    cout << "[3] The equation of the circle centre (a,b) radius r is: " << endl;
    cout << "\t (x-a)^2 + (y-b)^2 = r^2" << endl << endl;
    getch();

    cout << "[4] The chord is a line that joins two points on the circumference of a circle. " << endl << endl;
    getch();

    cout << "[5] The perpendicular from the centre of a circle to a chord bisects the chord. " << endl << endl;
    getch();


    cout << "[6] The angle in a semicircle is a right angle. " << endl << endl;
    getch();

    cout << "[7] A tangent is a line that meets a circle at one point only. " << endl << endl;
    getch();

    cout << "[8] The angle between a tangent and a radius is 90 degrees." << endl << endl;
    getch();

}
