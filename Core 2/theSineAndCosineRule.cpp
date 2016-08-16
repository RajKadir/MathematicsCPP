#include <iostream>
#include <conio.h>
#include <math.h>       /* sin */
#include "theSineAndCosineRule.h"

#define PI 3.14159265

using namespace std;


void theSineAndCosineRule_2a(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 2a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Using the sine rule to find missing sides." << endl << endl;
    getch();

    cout << "[1] In each of the parts a to d, given values refer to the general triangle." << endl;
    cout << "\t Triangle: A-c-B-a-C-b-A, where capitals are points, and lower case are edges. " << endl;
    cout << "\t 1a) Given that a = 8cm, A=30degrees, B=72degrees, find b" << endl;
    cout << "\t Sine rule: a/sinA = b/sinB = c/sinC" << endl;
    cout << "\t 8/sin(30)=b/sin(72)" << endl;
    cout << "\t Multiply both sides by sin(72) to get b" << endl;
    cout << "\t Rearrange: b = [8/sin(30)]sin(72)" << endl;

    /* Work out the answer, we convert the degrees to radians */
    double degrees, result;
    degrees = 30.0;
    result = 8 / sin (degrees*PI/180);
    degrees = 72.0;
    result = result * sin(degrees*PI/180);

    cout << "\t Answer: b = " << result << "cm" <<endl << endl;
    getch();

    cout << "[2] Calculate values x and y in the triangles: " << endl;
    cout << "\t 2a) Y=57degrees, y=?cm, X=?degrees, x=7.5cm, Z=39degrees, z=?cm" << endl;
    cout << "\t Since all triangles add up to 180: X=180-57-39=84degrees" << endl;
    cout << "\t Use: x/sinX=y/sinY = 7.5cm/sin(84)=y/sin(57)" << endl;
    cout << "\t Multiply both sides by sin(57) to get y " << endl;
    cout << "\t y = [7.5/sin(84)]sin(57)" << endl;

    /* Calculation of triangle side lengths */
    degrees = 84;
    result = 7.5 / sin(degrees*PI/180);
    degrees = 57;
    result = result * sin(degrees*PI/180);

    cout << "\t Answer: x = 84 degrees, y = " << result << "cm" << endl << endl;
    getch();

    cout << "[3] In /\PQR, QR = surd 3 cm, /_PQR = 45degrees, /_QPR = 60 degrees." << endl;
    cout << "\t 3a) Find PR" << endl;
    cout << "\t PRQ = 180 - PQR - QPR = 180 - 45 - 60 = 75degrees" << endl;
    cout << "\t QR/sin(QPR) = PR/sin(PQR) " << endl;
    cout << "\t surd3/sin(60) = PR/sin(45)" << endl;
    cout << "\t Multiply both sides by sin(45)" << endl;
    cout << "\t PR = [surd3/sin(60)]sin(45)" << endl;

    degrees = 60;
    result = sqrt(3) / sin(degrees*PI/180);
    degrees = 45;
    result = result * sin(degrees*PI/180);


    cout << "\t Answer: PR = " << result << "cm" << endl << endl;
    getch();

}

void theSineAndCosineRule_2b(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 2b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Using sine rule to find the missing angle. " << endl << endl;
    getch();

    cout << "[1] In each of the following sets of data for a triangle ABC, find value of x: " << endl;
    cout << "\t Triangle: A-c-B-a-C-b-A" << endl;
    cout << "\t 1a) AB=6cm, BC=9CM, BAC=117degrees, ACB =x" << endl;
    cout << "\t sin(BAC)/BC = sin(ACB)/AB" << endl;
    cout << "\t sin(ACB) = [sin(BAC)/BC](AB)" << endl;
    cout << "\t sin(X) = [sin(117)/9](6)" << endl;
    cout << "\t X = sin-1[6sin(117)/9]" << endl;

    double degrees, result, sine;
    degrees = 117;
    sine = 6 * sin(degrees*PI/180);
    sine = sine / 9;
    // Convert radians back to degrees
    result = asin(sine) * 180 / PI;


    cout << "\t Answer: X = " << result << " degrees" << endl << endl;
    getch();
}

void theSineAndCosineRule_2c(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 2c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You can sometimes find two solutions for a missing angle. " << endl;
    cout << "* When the angle you are finding is larger than the given angle" << endl;
    cout << "  there are two possible results. This is because you can draw " << endl;
    cout << "  two possible triangles with the data." << endl;
    cout << "* In general, sin(180-x) = sin x. For example sin 30 = sin 150" << endl;

    cout << "[1] In /\ABC, BC =6cm, AC=4.5cm, and /_ABC =45degrees" << endl;
    cout << "\t a) Calculate the two possible values of /_BAC." << endl;
    cout << "\t sin(45) = sin(180-45) = sin(135)" << endl;
    cout << "\t sin(ABC)/AC = sin(BAC)/BC" << endl;
    cout << "\t sin(BAC) = BCsin(ABC)/AC" << endl;
    cout << "\t BAC = sin-1[BCsin(ABC)/AC]" << endl;
    cout << "\t BAC = x or 180 - x" << endl;
    cout << "\t BAC = sin-1[6sin(45)/4.5]" << endl;

    double BAC, ABC = 135 * PI/180, AC = 4.5, BC = 6;
    BAC = BC * sin(ABC);
    BAC = BAC / AC;
    BAC = asin(BAC) * 180 / PI;

    cout << "\t Answer BAC = " << BAC << " degrees or BAC = " << 180-BAC << " degrees. " << endl << endl;
    getch();
}

void theSineAndCosineRule_2d(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 2d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "The cosine rule is: a^2 = b^2 + c^2 -2bccosA " << endl;
    cout << "Or cos A = (b^2 + c^2 - a^2) / 2bc" << endl;
    cout << "You can use the cosine rule to find an unkown side in a triangle" << endl;
    cout << "when you know the lengths of two sides and the size of the angle between the sides." << endl << endl;
    getch();


    cout << "[1] In each of the following triangles calculate the length of the third side." << endl;
    cout << "\t 1a) AB = ?, BC = 6.5cm, AC = 8.4cm, ACB = 20degrees" << endl;
    cout << "\t Here A = ACB, b = 6.5, c = 8.4" << endl;
    cout << "\t So a^2 = 6.5^2 + 8.4^2 -2(6.5)(8.4)(cos(20))" << endl;
    cout << "\t And to find a, square root a^2, because it is a unit of length, take the positive. " << endl;

    double a, b = 6.5, c = 8.4, A = 20;
    a = sqrt(pow(b, 2) + pow(c, 2) - 2*b*c*cos(A*PI/180));
    cout << "\t The answer is: a = " << a << "cm" << endl << endl;
    getch();


}

void theSineAndCosineRule_2e(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 2e --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Using the cosine rule to find an unknown angle" << endl;
    cout << "You can find an unknown angle in a triangle if you " << endl;
    cout << "know the lengths of all three sides" << endl << endl;
    getch();

    cout << "We can do this by rearranging the equation: " << endl;
    cout << "\t a^2 = b^2 + c^2 - 2bccosA" << endl;
    cout << "\t 2bcosA = b^2 + c^2 - a^" << endl;
    cout << "\t cos A = (b^2 + c^2 - a^2)/2bc" << endl;
    cout << "\t then take the inverse of cos A to get A" << endl;


    cout << "[1] In the following triangles calculate the size of the angle marked *" << endl;
    cout << "\t /\ ABC, AB = 4cm, BC = 8cm, CA = 10cm, ABC = *" << endl;
    cout << "\t CA must be a, since the angle opposite to the edge is marked *" << endl;
    cout << "\t the other two edges can be either b or c" << endl;
    cout << "\t So cos A = (AB^2 + BC^2 - CA^2)/2(AB)(BC) " << endl;
    cout << "\t Inverse the answer to get A" << endl;

    double  a = 10.0, b = 4.0, c = 8.0, A;
    // cos A = (b^2 + c^2 - a^2)/2bc
    A = (pow(b, 2) + pow(c,2) - pow(a,2))/(2*b*c);
    // A = cos-1(cos A)
    A = acos(A) * 180 / PI;

    cout << "The answer is: " << A << " degrees" << endl;
}

void theSineAndCosineRule_2f(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 2f --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Understand the sine rule, the cosine rule, the trigonometric ratios " << endl;
    cout << "sin cos and tan, and Pythagoras' theorem to solve problems. " << endl << endl;

    cout << "When a triangle has a right angle or isosceles, use sine, cosine, tangent or Pythagoras theorem." << endl;
    cout << "The line of symmetry produces two right angle triangles" << endl;
    cout << "Use cosine rule when you are given either two sides and the angle between them or three sides" << endl << endl;

    cout << "For other combinations use the sine rule. " << endl;
    cout << "When you have used the cosine rule once, it is generally better not to use it again" << endl;
    cout << "as the cosine rule involves more calculations and so may introduce more errors" << endl << endl;


    cout << "[1] In each triangle below find the values of x, y, and z. " << endl;
    cout << "\t 1a) AB = 4.2cm, BC = 5.7cm, AC = z cm, ABC = y, ACB = x, BAC = 56 degrees" << endl;
    cout << "\t Here sin sin A/a = sin B/b so: sin BAC/BC = sin ACB/AB" << endl;
    cout << "\t (sin BAC/BC)(AB) = sin ACB" << endl;
    cout << "\t sin-1(sin ACB)" << endl;

    /*
        Calculation in C++
        Triangle /\ A-c-B-a-C-b-A
        lower case = side length cm
        upper case = angle degrees
    */
    double AB = 4.2, BC = 5.7, AC, ABC, ACB, BAC = 56;

    ACB = sin(BAC*PI/180)*(AB);
    ACB = ACB / BC;
    ACB = asin(ACB) * 180 / PI;

    cout << "Angle ACB (x) = " << ACB << " degrees" << endl;

    /*
        Find the other angle
    */
    ABC = 180 - BAC - ACB;
    cout << "Angle ABC (y) = " << ABC << " degrees" << endl;

    /*
        Find the other length using sine rule a/sin A = b/sin B
    */

    // 1. AB/sin(ACB) = AC/sin(ABC);
    // 2. AC = (sin(ABC) * AB)/sin(ACB);
    AC = (sin(ABC*PI/180) * AB)/sin(ACB*PI/180);
    cout << "Side AC (z) = " <<  AC << " cm" << endl;
}

void theSineAndCosineRule_2g(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 2g --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You can calculate the area of a triangle using the formula: " << endl;
    cout << "Area of a triangle = 1/2absinC or 1/2acsinB or 1/2bcsinA" << endl << endl;
    getch();

    cout << "[1] Calculate the area of the following triangles: " << endl;
    cout << "\t 1a) /\ ABC, AB = 8.6cm, BC = ?, AC = 7.8cm, BAC = 45 degrees" << endl;
    cout << "\t Area of triangle = (1/2)(8.6)(7.8)sin(45) " << endl;

    /*
        Calculation
    */
    double Area, AB = 8.6, AC = 7.8, BAC = 45;
    Area = 0.5*AB*AC*sin(45*PI/180);

    cout << "\t Area of triangle = " << Area << " cm^2" << endl << endl;
    getch();

}

void theSineAndCosineRule_summary(){
    cout << "----------------------------------------------------" << endl;
    cout << "--------------- Summary of key points --------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;
    getch();

    cout << "[1] The sine rule is: a/sin A = b/sin B = c/sin C or sin A/a = sin B/b = sin C/c" << endl << endl;
    getch();

    cout << "[2] You can find the sine rule to find an unknown side in a triangle " << endl;
    cout << "if you know two angles the length of one of their opposite sides." << endl << endl;
    getch();

    cout << "[3] You can use the sine rule to find an unknown angle in a triangle " << endl;
    cout << "if you know the lengths of two sides and one of their opposite angles." << endl << endl;
    getch();

    cout << "[4] The cosine rule is: a^2 = b^2 + c^2 - 2bccos A" << endl;
    cout << "\t b^2 = a^2 + c^2 - 2accos B or c^2 = a^2 + b^2 - 2abcos C" << endl << endl;
    getch();

    cout << "[5] You can use the cosine rule to find an unknown side in a triangle" << endl;
    cout << "if you know the lengths of two sides and the angle between them." << endl << endl;
    getch();

    cout << "[6] You can use the cosine rule to find an unknown angle if you know " << endl;
    cout << "the lengths of all three sides. " << endl << endl;
    getch();

    cout << "[7] You can find an unknown angle using a rearranged form of the cosine rule: " << endl;
    cout << "cos A = (b^2 + c^2 - a^2)/2bc  or  cos B = (a^2 + c^2 -b^2)/2ac  or  " << endl;
    cout << "cos C = (a^2 + b^2 - c^2)/2ab "  << endl << endl;
    getch();

    cout << "[8] You can find the area of a triangle using the formula: " << endl;
    cout << "area = 1/2absin C  if you know the length of two sides (a and b) " << endl;
    cout << "and the value of the angle C between them. " << endl << endl;
    getch();

 }

