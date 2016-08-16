#include <iostream>
#include <cmath>
#include <conio.h>
#include "geometricSequencesAndSeries.h"
using namespace std;

void geometricSequencesAndSeries_7a(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 7a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "The following sequences are called geometric sequences. " << endl;
    cout << "To get one term from the next we multiply the same number each time." << endl;
    cout << "This is called the comm ratio, r. " << endl << endl;
    getch();

    cout << "Get common ratio by U2/U1 or U3/U2 etc" << endl << endl;
    getch();

    cout << "[1] Which of the following are geometric sequences? " << endl;
    cout << "For the ones that are, give the values of 'r' in the sequence." << endl;
    cout << "\t 1a) 1,2,4,8,16,32" << endl;
    cout << "\t U2/U1 = 2/1 = 2" << endl;
    cout << "\t r = 2" << endl << endl;
    getch();

    cout << "\t 1b) 2, 5, 8, 11, 14" << endl;
    cout << "\t 5/2 = 2.5, 8/5 = 1.6" << endl;
    cout << "This is not a geometric sequence. " << endl;
    getch();

    cout << "[2] Continue the following geometric sequences for three more terms: " << endl;
    cout << "\t 2a) 5, 15, 45" << endl;
    cout << "\t 15/5 = 3, 45/ 15 = 3, so multiply by 3." << endl;
    cout << "\t 45 * 3 = 135" << endl;
    cout << "\t Answer: 135, 405, 1215" << endl;
    getch();

    cout << "\t 2f) x, -2x^2, 4x^3" << endl;
    cout << "\t -2x^2/x = -2x, 4x^3/-2x^2 = -2x" << endl;
    cout << "\t multiply by -2x" << endl;
    cout << "\t 4x^3 * -2x = -8x^4 " << endl;
    cout << "\t Answer: -8x^4, 16x^5, 32x^6" << endl << endl;
    getch();

    cout << "[3] If 3, x and 9 are the first three terms of a geometric sequence, Find: " << endl;
    cout << "\t a) the exact value of x" << endl;
    cout << "\t 3, x, 9" << endl;
    cout << "\t x/3 = r" << endl;
    cout << "\t x * (x/3) = 9" << endl;
    cout << "\t x^2/3 = 9" << endl;
    cout << "\t x^2 = 27" << endl;
    cout << "\t x = surd 27" << endl;
    cout << "\t x = surd 3*3*3" << endl;
    cout << "\t x = 3 surd 3" << endl << endl;
    getch();

    cout << "\t b) exact value of 4th term. " << endl;
    cout << "\t 4th term = 9 * x/3" << endl;
    cout << "\t sub x = 3 surd 3" << endl;
    cout << "\t 4th term = 27surd3/3 " << endl;
    cout << "\t Answer simplified: 9 surd 3" << endl << endl;
    getch();
}

void geometricSequencesAndSeries_7b(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 7b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You can define a geometric sequence using the first term a and the common ratio r." << endl << endl;
    getch();

    cout << "1st term: a " << endl;
    cout << "2nd term: ar" << endl;
    cout << "3rd term: ar^2" << endl;
    cout << "4th term: ar^3" << endl;
    cout << "nth term: ar^n-1" << endl << endl;
    getch();

    cout << "[1] Find the sixth, tenth and nth terms of the following geometric sequences: " << endl;
    cout << "\t 1a) 2, 6, 18, 54" << endl;
    cout << "\t a = 2" << endl;
    cout << "\t r = 6/2 = 3" << endl;
    cout << "\t when n = 6, U6 = ar^n-1 = (2)(3^6-1) = (2)(3^5) = 2(243)" << endl;
    cout << "\t U6: 486" << endl;
    cout << "\t U10 = (2)(3^9) = (2)(19683) = 39,366" << endl;
    cout << "\t UN = (2)(3^n-1)" << endl;
    cout << "\t Answer: 486, 39,366, 2 * 3^n-1" << endl << endl;
    getch();

}

void geometricSequencesAndSeries_7c(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 7c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You can use geometric sequences to solve problems involving growth and decay" << endl;
    cout << "e.g. interest rates, population growth and decline. " << endl << endl;
    getch();


    cout << "[1] A population of ants is growing at a rate of 10% a year. " << endl;
    cout << "If there were 200 ants in the initial population, write down the number after. " << endl;
    cout << "\t a) 1 year" << endl;
    cout << "\t a = 200, r = 1.1, n = 2 (since 1 is first year)" << endl;
    cout << "\t ar^2-1" << endl;
    cout << "\t Answer: (200)(1.1) = 220" << endl << endl;
    getch();

    cout << "[2] A motorcycle has four gears. The maximum speed in bottom gear is 40km h^-1" << endl;
    cout << "and the maximum speed in top gear is 120 km h^-1. Given that the maximum speeds" << endl;
    cout << "in each successive gear form a geometric progression, calculate, in kmh^-1" << endl;
    cout << "the maximum speeds in two intermediate gears. " << endl;
    cout << "\t 2a) a, ar, ar^2, ar^3" << endl;
    cout << "\t a = 40, ar^3 = 120" << endl;
    cout << "\t bottom = 1st, top = 4th" << endl;
    cout << "\t find 2nd and 3rd gears." << endl;
    cout << "\t sub a = 40 into ar^3 = 120" << endl;
    cout << "\t (40)r^3 = 120" << endl;
    cout << "\t r^3 = 120/40 = 3" << endl;
    // Power of a third is the positive cubic root
    double r = pow(3, 1/3.);
    cout << "\t cubic root r^3 = r = " << r << endl;
    cout << "\t 2nd gear: " << (40)*r << endl; // ar
    cout << "\t 3rd gear: " << (40)*pow(r, 2) << endl << endl; // ar^2
    getch();

}

void geometricSequencesAndSeries_7d(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 7d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to find the sum of a geometric series. " << endl << endl;
    getch();

    cout << "General rule for the sum of a geometric series: Sn = a(1-r^n)/(1-r)" << endl << endl;
    getch();


    cout << "[1] Find the sum of the following geometric series." << endl;
    cout << "\t 1a) 1 + 2 + 4 + 8 + .. (8 terms)" << endl;
    cout << "\t S8 = 1(2^8 - 1)/(2 - 1)" << endl;
    cout << "\t S8 = 1(256-1)/1" << endl;
    cout << "\t S8 = 255" << endl << endl;
    getch();

}

void geometricSequencesAndSeries_7e(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 7e --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "You need to be able to find the sum to infinity of a convergent geometric series" << endl << endl;
    getch();

    cout << "The sum to infinity of a geometric series is: a / (1-r) if |r| < 1" << endl << endl;
    getch();


    cout << "[1] Find the sum to infinity, if it exists, of the following series: " << endl;
    cout << "\t 1a) 1 + 0.1 + 0.01 + 0.001 + .." << endl;
    cout << "\t r = 0.1 / 1 = 0.1" << endl;
    cout << "\t 0.1 * 0.1 = 0.01" << endl;
    cout << "\t this is a geometric series." << endl;
    cout << "\t as r = 0.1, the series to infinity exists" << endl;
    cout << "\t Soo = a / (1 - r) = 1 / (1 - 0.1) = 1/0.9" << endl;
    cout << "\t Answer of sum to infinity: 10/9" << endl << endl;
    getch();
}

void geometricSequencesAndSeries_summary(){
    cout << "----------------------------------------------------" << endl;
    cout << "--------------- Summary of key points --------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "[1] In a geometric series you can get from one term to the next " << endl;
    cout << "by multiplying by a constant called the common ratio. " << endl << endl;
    getch();

    cout << "[2] The formula for the nth term = ar^n-1 where a = first" << endl;
    cout << "term and r = common ratio." << endl << endl;
    getch();

    cout << "[3] The formula for the sum to n terms is " << endl;
    cout << "Sn = a(1-r^n)/(1-r) or Sn = a(r^n - 1)/(r-1)" << endl << endl;
    getch();

    cout << "[4] The sum to infinity exists if |r| < 1 and is Soo = a/(1-r)" << endl;
    cout << "Soo = Sum to infinity" << endl << endl;
    getch();

}
