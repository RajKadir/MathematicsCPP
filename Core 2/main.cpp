#include <iostream>
using namespace std;

/* Chapter Files */
#include "algebraAndFunctions.h"
#include "theSineAndCosineRule.h"


/* Global */
bool quit = false;

void selectChapters(int chapter){
    switch(chapter){
        /*
            Algebra and Functions
        */
        case 1:
            algebraAndFunctions_1a();
            algebraAndFunctions_1b();
            algebraAndFunctions_1c();
            algebraAndFunctions_1d();
            algebraAndFunctions_1e();
         //   algebraAndFunctions_1f();
            algebraAndFunctions_summary();
            break;
        case 2:
            theSineAndCosineRule_2a();
            theSineAndCosineRule_2b();
            theSineAndCosineRule_2c();
            theSineAndCosineRule_2d();
            theSineAndCosineRule_2e();
            theSineAndCosineRule_2f();
            theSineAndCosineRule_2g();
            theSineAndCosineRule_summary();
            break;

        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            break;

        default:
            cout << "You probably entered an incorrect value try again later!" << endl;
            /* Flag to end loop */
            quit = true;
            break;
    }
}
int main(){

    int chapter;
    while(!quit){
        cout << "Welcome to my A-Level testing in Core 2. " << endl;
        cout << "Which Chapter would you like to visit? 1-8" << endl;
        cout << "\t 1. Algebra and functions" << endl;
        cout << "\t 2. The sine and cosine rule" << endl;
        cout << "\t 3. Exponentials and logarithms" << endl;
        cout << "\t 4. Coordinate geometry in the (x,y) plane" << endl;
        cout << "\t 5. The binomial expansion" << endl;
        cout << "\t 6. Radian measure and its applications" << endl;
        cout << "\t 7. Geometric sequences and series" << endl;
        cout << "\t 8. Graphs of trigonometric functions" << endl;
        cout << "\t 9. Differentiation " << endl;
        cout << "\t 10. Trigonometrical identities and simple equations" << endl;
        cout << "\t 11. Integration" << endl;
        cout << "\t 12. Formulae I need to remember" << endl;
        cin >> chapter;
        selectChapters(chapter);
    }
    return 0;
}
