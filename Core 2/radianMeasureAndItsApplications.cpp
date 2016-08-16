#include <iostream>
#include <cmath>
#include <conio.h>
#include "radianMeasureAndItsApplications.h"
using namespace std;

#define PI 3.14159265

void radianMeasureAndItsApplications_6a(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 6a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You can measure angles in radians. " << endl << endl;
    getch();


    cout << "[1] Convert the following angles in radians to degrees: " << endl;
    cout << "\t a) PI/20 " << endl;
    cout << "\t Here PI rad = 180" << endl;
    cout << "\t So 1/20 * 180" << endl;
    cout << "\t Answer = 9 degrees" << endl << endl;
    getch();

    cout << "\t b) 7PI/6" << endl;
    cout << "\t Again PI Rad = 180" << endl;
    cout << "\t So 7/6 * 180 = " << endl;
    cout << "\t Answer = 210 degrees" << endl << endl;
    getch();

    cout << "[2] Using a calculator convert the angles to degrees. " << endl;
    cout << "\t 2a) 0.46 radians" << endl;
    cout << "\t Since radians = degrees * PI / 180 " << endl;
    cout << "\t Then degrees = radians * 180 / PI" << endl;
    cout << "\t So calculation: degrees = 0.46 * 180 / PI" << endl;
    cout << "\t Answer: " << (0.46*180)/PI << " degrees " << endl << endl;
    getch();

    cout << "[3] Use your calculator to write down the value, of the following trig functions. " << endl;
    cout << "\t 3a) sin 0.5 radians" << endl;
    cout << "\t Answer: " << sin(0.5) << endl << endl;
    getch();

    cout << "\t 3b) cos surd 2 radians" << endl;
    cout << "\t Answer: " << cos(sqrt(2)) << endl << endl;
    getch();

    cout << "[4] Convert the following angles to radians, giving your answers as multiples of PI" << endl;
    cout << "\t 4a) 8 degrees" << endl;
    cout << "\t = 8PI/180 = 2PI/45" << endl << endl;
    getch();

    cout << "\t 4b) 10 degrees" << endl;
    cout << "\t use radians = (degrees * PI) / 180" << endl;
    cout << "\t (10 * PI)/180 = 10PI/180 = PI/18" << endl << endl;
    getch();

    cout << "[5] Use your calculator to convert the following angles to radians. " << endl;
    cout << "\t 5a) 50 degrees" << endl;
    cout << "\t Use radians = degrees * PI / 180" << endl;
    cout << "\t = (50 * 180)/PI " << endl;
    cout << "\t Answer: " << (50*PI)/180 << " radians" << endl << endl;
    getch();


}

void radianMeasureAndItsApplications_6b(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 6b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "The formula for the length of an arc of a circle is simpler when you use radians. " << endl << endl;
    getch();

    cout << "[1*] To find the arc length l of a circle, use the formula l = r0, where r is the radius" << endl;
    cout << "of the circle and 0 is the angle, in radians, contained by the sector. 0 = theta" << endl << endl;
    getch();

    cout << "[1] An arc AB of circle, centre O and radius r cm, subtends an angle 0 radians at O. " << endl;
    cout << "The length of AB is L cm." << endl;
    cout << "\t 1a) Find L when i) r = 6, 0 = 0.45" << endl;
    cout << "\t use l = r0" << endl;
    cout << "\t L = 6 * 0.45" << endl;
    cout << "\t = 2.7cm" << endl << endl;
    getch();

    cout << "[2] A minor arc AB of a circle, centre O and radius 10cm subtends an angle x at O." << endl;
    cout << "The major arc AB subtends an angle 5x at O. Find, in terms of PI, the length of minor arc AB." << endl;
    cout << "\t AB = 10*x" << endl;
    cout << "\t Full circle = 2PI" << endl;
    cout << "\t The small angle is x, and the bigger angle is 5x" << endl;
    cout << "\t 2PI - 5x = x" << endl;
    cout << "\t 2PI = 6x" << endl;
    cout << "\t x = 2PI/6" << endl;
    cout << "\t AB = 10 * 2PI/6 = 20PI/6 = 10PI/3 cm" << endl << endl;
    getch();

    cout << "[3] An arc AB of a circle, centre O and radius 6cm, has length L cm. " << endl;
    cout << "Given that the chord AB has length 6cm, find the value of L, giving your terms in PI " << endl;
    cout << "\t l = r0" << endl;
    cout << "\t radius = 6 cm, theta = ?, l = ?, AB = 6 cm" << endl;
    cout << "\t If the triangle has the sides 6cm, equally then the angles must be the same. " << endl;
    cout << "\t OAB is an equilateral. " << endl;
    cout << "\t theta = 180 / 3 = 60 degrees for every side.  " << endl;
    cout << "\t converting 60 degrees to radians = 60 * PI / 180 = 60PI/180 = PI/3" << endl;
    cout << "\t so l = 6 * PI/3 = 6PI/3" << endl;
    cout << "\t Answer: 2PI" << endl << endl;
    getch();



}

void radianMeasureAndItsApplications_6c(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 6c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "The formula for the area of a sector of a circle is simpler when you use radians. " << endl;
    cout << "[*] To find the area A of a sector of a circle use the formula A = (1/2)(r^2)(theta)" << endl;
    cout << "Where r is the radius of the circle and theta is the angle, in radians, contained by the sector. " << endl;

    cout << "So (area of sector/area of circle) = (angle PQR / total angle around O)" << endl;
    cout << "A / PIr^2 = theta / 2PI" << endl;
    cout << "Multiply out by PIr^2" << endl;
    cout << "A = 1/2r^2theta" << endl << endl;
    getch();


    cout << "[1] Find the area of the shaded sector in each of the following circles with centre C. " << endl;
    cout << "Leaving answer in terms of PI " << endl;
    cout << "\t 1a) radius = 8cm, angle inside = 0.6 radians" << endl;
    cout << "\t A = 1/2(r^2)(theta) " << endl;
    cout << "\t A = " << 0.5*pow(8,2)*0.6 << " cm^2" << endl << endl;
    getch();

    cout << "\t 1b) radius = 9cm, theta = PI/6" << endl;
    cout << "\t A = (1/2)(9)^2(PI/6)" << endl;
    cout << "\t A = (1/2)(81)PI/6" << endl;
    cout << "\t A = 40.5PI/6" << endl;
    cout << "\t A = 6.75PI cm^2" << endl << endl;
    getch();

    cout << "\t 1c) radius = 1.2cm, theta = PI/5, area = whole circle - segment" << endl;
    cout << "\t the area shaded is 2PI - PI/5 = 10/5PI - 1/5PI = 9/5PI" << endl;
    cout << "\t A = (1/2)(1.2)^2(9/5PI)" << endl;
    cout << "\t A = (1/2)(1.44)(9/5PI)" << endl;
    cout << "\t A = 0.72(9/5PI)" << endl;
    cout << "\t A = 6.48/5PI" << endl;
    cout << "\t A = 1.296PI cm^2" << endl << endl;
    getch();

    cout << "\t 1f) radius = 5cm, isosceles triangle angle = 0.2 radians, area shaded = left of isoc triangle. " << endl;
    cout << "\t since isosceles have 2 equal angles, the angle inside segment must be 0.4c" << endl;
    cout << "\t A = (1/2)(5)^2(0.4)" << endl;
    cout << "\t A = (1/2)(25)(0.4)" << endl;
    cout << "\t A = 25/2(0.4)" << endl;
    cout << "\t A = 12.5*0.4" << endl;
    cout << "\t A = 5 cm^2" << endl << endl;
    getch();
}

void radianMeasureAndItsApplications_summary(){
    cout << "----------------------------------------------------" << endl;
    cout << "--------------- Summary of key points --------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;
    getch();

    cout << "[1] If the arc AB has length r, then /_AOB is 1 radian. " << endl << endl;
    getch();

    cout << "[2] A radian is the angle subtended at the centre of a circle " << endl;
    cout << "by an arc whose length is equal to that of the radius of the circle. " << endl << endl;
    getch();

    cout << "[3] 1 radian = 180 degrees / PI" << endl << endl;
    getch();

    cout << "[4] The length of an arc of a cirlce is l = r * theta" << endl << endl;
    getch();

    cout << "[5] The area of a sector A = (1/2)(r^2)(theta)" << endl << endl;
    getch();

    cout << "[6] The area of a segment in a circle is A = (1/2)(r^2)(theta - sin theta)" << endl << endl;
    getch();
}
