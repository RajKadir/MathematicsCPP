#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "sequenceAndSeries.h"
using namespace std;


void sequenceAndSeries_6a(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 6a --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    /*
        Question 1
    */
    cout << "[1] Find the next three terms and state the rule. " << endl;
    cout << "\t 1a) 4 , 9, 14, 19 " << endl;
    cout << "\t So 9-4 = 5 and 14-9 = 5, so we must be adding 5 every time. " << endl;
    cout << "\t next three terms: 24, 29, 34" << endl;
    cout << "\t rule: add 5 to previous term" << endl << endl;
    getch();

}

void sequenceAndSeries_6b(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 6b --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;


    /*
        Question 1
    */
    cout << "[1] Find the U1, U2, U2 and U10 terms of the sequence. " << endl;
    cout << "\t 1a) Un = 3n + 2" << endl;
    cout << "\t U1 = 3(1) + 2 = 5" << endl;
    cout << "\t U2 = 3(2) + 2 = 8" << endl;
    cout << "\t U3 = 3(3) + 2 = 11" << endl;
    cout << "\t U10 = 3(10) + 2 = 32" << endl << endl;
    getch();

    cout << "\t 1h) Un = (n-2)^3" << endl;
    cout << "\t U1 = (1-2)^3 = -1" << endl;
    cout << "\t U2 = (2-2)^3 = 0" << endl;
    cout << "\t U3 = (3-2)^3 = 1" << endl;
    cout << "\t U10 = (10-2)^3 = 512" << endl << endl;
    getch();

    /*
        Question 2
    */
    cout << "[2] Find the value of n for which Un has given the value: " << endl;
    cout << "\t 2a) Un = 2n - 4, Un = 24" << endl;
    cout << "\t 24 = 2n - 4 " << endl;
    cout << "\t 2n = 28" << endl;
    cout << "\t n = 14" << endl << endl;
    getch();

    cout << "\t 2d) Un = 2n + 1/ n-3, Un = 19/6" << endl << endl;


}

void sequenceAndSeries_6c(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 6c --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    /*
        Question 1a
    */
    cout << "[1] Find the first four terms of the following recurrence relationships:" << endl;
    cout << "\t 1a) Un+1 = Un + 3, U1 = 1" << endl;
    cout << "\t First term:         U1 = 1" << endl;
    cout << "\t Substituting n = 1, U2 = U1 + 3 = 1 + 3 = 4" << endl;
    cout << "\t Substituting n = 2, U3 = U2 + 3 = 4 + 3 = 7" << endl;
    cout << "\t Substituting n = 3, U4 = U3 + 3 = 7 + 3 = 10" << endl;
    cout << "\t Answer: 1, 4, 7, 10" << endl << endl;
    getch();


    /*
        Question 1f
    */
    cout << "\t 1f) Un+1 = (Un)^2 - 1, U1 = 2" << endl;
    cout << "\t First term:       U1 = 2" << endl;
    cout << "\t Substitute n = 1, U2 = (U1)^2 - 1 = (2)^2 - 1 = 4 - 1 = 3 " << endl;
    cout << "\t Substitute n = 2, U3 = (U2)^2 - 1 = (3)^2 - 1 = 9 - 1 = 8 " << endl;
    cout << "\t Substitute n = 3, U4 = (U3)^2 - 1 = (8)^2 - 1 = 63" << endl;
    cout << "\t Answer: 2, 3, 8, 63" << endl << endl;
    getch();


    /*
        Question 2a
    */
    cout << "[2] Suggest possible recurrence relationships with the following sequences:" << endl;
    cout << "\t 2a) 3, 5, 7, 9" << endl;
    cout << "\t We can describe it as adding 2 to the previous term. " << endl;
    cout << "\t Answer: Uk+1 = Uk + 2, U1 = 3" << endl << endl;
    getch();


    /*
        Question 2j
    */
    cout << "\t 2j) 4, 10, 18, 38, 74" << endl;
    cout << "\t We can describe it as the previous term + 2(term before that)" << endl;
    cout << "\t So 10 + 2(4) = 18, 18 + 2(10) = 38, 38 + 2(18) = 74" << endl;
    cout << "\t So we have Un = Un-1 + 2(Un-2)" << endl;
    cout << "\t But that needs to be corrected in the form Uk+1 = Uk " << endl;
    cout << "\t Answer: Un+2 = Un+1 + 2Un, U1 =4, U2 = 10" << endl << endl;
    getch();


}

void sequenceAndSeries_6d(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 6d --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    /*
        Question 1a
    */
    cout << "[1] Which of the following sequences are arithmetic? " << endl;
    cout << "\t A sequence in the form of 'Uk+1 = Uk + n' is arithmetic." << endl << endl;

    cout << "\t 1a) 3, 5, 7, 9, 11" << endl;
    cout << "\t the sequence is adding 2 every time " << endl;
    cout << "\t Uk+1 = Uk + 2" << endl;
    cout << "\t Answer: the sequence is arithmetic." << endl << endl;
    getch();

    cout << "\t 1b) 10, 7, 4, 1" << endl;
    cout << "\t We are taking away -3 every time" << endl;
    cout << "\t this could be written as Uk+1 = Uk + -3" << endl;
    cout << "\t Answer: the sequence is arithmetic." << endl << endl;
    getch();

    cout << "\t 1d) 1, 4, 9, 16, 25" << endl;
    cout << "\t We are squaring each number 1, 2, 3, 4, 5" << endl;
    cout << "\t This sequence could be written as: Un = n^2" << endl;
    cout << "\t Answer: the sequence is not arithmetic. " << endl << endl;
    getch();


    cout << "[2] Find the 10th and nth terms in the following arithmetic progressions: " << endl;
    cout << "\t 2a) 5, 7, 9, 11" << endl;
    cout << "\t add 2 every term, so 5 + 9x2 = 23" << endl;
    cout << "\t Answer: 23" << endl << endl;
    cout << "\t Alternative approach: " << endl;
    cout << "\t use 'a + (n-1)d' where a is the first term, d is the common difference" << endl;
    cout << "\t 5 + (10-1)(2) = 5 + (9)(2) = 5 + 18 = 23" << endl;
    cout << "\t Answer: U10 = 23" << endl << endl;
    getch();




}

void sequenceAndSeries_6e(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 6e --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    /*
        Question 2a
    */
    cout << "[1] Find the 20th and nth term of the arithmetic sequences " << endl;
    cout << "\t 1a) 2 + 6 + 10 + 14 + 18" << endl;
    cout << "\t 2 + (19)(4) = 78" << endl;
    cout << "\t 2 + (n-1)(4) = 2 + 4n -4 = 4n - 2" << endl;
    cout << "\t Answer: 20th term = 78, nth term = 4n - 2" << endl << endl;
    getch();

}

void sequenceAndSeries_6f(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 6f --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Finding the sum of an arithmetic sequence." << endl;
    cout << "\t Use Sn = n/2[2a + (n-1)d]" << endl;
    cout << "\t there are n lots of 2a +(n-1)d" << endl;
    cout << "\t or use Sn = n/2(a+L) where L is last term" << endl << endl;
    getch();

    /*
        Question 1a
    */
    cout << "[1] Find the sum of the following series:" << endl;
    cout << "\t 1a) 3 + 7 + 11 + 14 + ... (20 terms)" << endl;
    cout << "\t 20/2[2(3)+(20-1)(4)] = 10[6 + (19)(4)] = 10(6 + 76) = 10(82) = 820" << endl;
    cout << "\t Answer: 820" << endl << endl;
    getch();


    cout << "[2] Find how many terms are needed to make the given sum:" << endl;

    cout << "\t 2a) 5 + 8 + 11 + 14 + ... = 670" << endl;
    cout << "\t a = 5, d = 3, Sn = 670, n = ?" << endl;
    cout << "\t 670 = n/2[2(5) +(n-1)(3)]" << endl;
    cout << "\t 1340 = n[10+3n-3]" << endl;
    cout << "\t 1340 = n(3n+7)" << endl;
    cout << "\t 1340 = 3n^2 + 7n" << endl;
    cout << "\t 3n^2 + 7n - 1340" << endl;
    cout << "\t x = 20, or x = -67/3" << endl;
    cout << "\t Answer: 20" << endl << endl;
    getch();

    /*
        Question 3
    */
    cout << "[3] Find the sum of the first 50 even numbers" << endl;
    cout << "\t S = ?, a = 2, n = 50, d = 2" << endl;
    cout << "\t S = 50/2[2(2) + (50-1)(2)]" << endl;
    cout << "\t S = 50/2(4 + 98)" << endl;
    cout << "\t S = 50/2(102)" << endl;
    cout << "\t 2S = 50(102)" << endl;
    cout << "\t 2S = 5100 " << endl;
    cout << "\t Answer S = 2550" << endl << endl;
    getch();

}


void sequenceAndSeries_6g(){
    cout << "----------------------------------------------------" << endl;
    cout << "-------------------- Section 6g --------------------" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    /*
        Question 1
    */

    cout << "[1] Rewrite the following sums using E (Σ) notation: Where E is Sigma (Σ) or 'sum of'" << endl;

    /*
        Due to the nature of the question, we cannot write it into the console to the standard of the question
    */

}

void sequenceAndSeries_6h(){
}
