#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

// My Chapter Files
#include "algebraAndFunctions.h"
#include "quadraticFunctions.h"
#include "equationsAndInequalities.h"
#include "sketchingCurves.h"
#include "coordinateGeometry.h"

using namespace std;



int main()
{
    cout << "Welcome to my A-Level testing in Core 1. " << endl;
    cout << "Which Chapter would you like to visit? 1-8" << endl;

    int chapter;
    cin >> chapter;

    switch(chapter){

        case 1:
            /*
                Chapter 1 - Algebra and Functions
            */
            algebraAndFunctions_1a();
            algebraAndFunctions_1b();
            algebraAndFunctions_1c();
            algebraAndFunctions_1d();
            algebraAndFunctions_1e();
            algebraAndFunctions_1fa();
            algebraAndFunctions_1fb();
            algebraAndFunctions_1g();
            algebraAndFunctions_1h();
            break;


        case 2:
            /*
                Chapter 2 - Quadratic Functions
            */
            quadraticFunctions_2a();
            quadraticFunctions_2b();
            quadraticFunctions_2c();
            quadraticFunctions_2d();
            quadraticFunctions_2e();
            quadraticFunctions_2f();
            break;

        case 3:
            /*
                Chapter 3 - Equations and Inequalities
            */
            equationsAndInequalities_3a();
            equationsAndInequalities_3b();
            equationsAndInequalities_3c();
            equationsAndInequalities_3d();
            equationsAndInequalities_3e();
            break;

        case 4:
            /*
                Chapter 4 - Sketching Curves
            */
            // ON PAPER
            break;
        case 5:
            /*
                Chapter 5 - Coordinate Geometry
            */
            coordinateGeometry_5a();
            coordinateGeometry_5b();
            coordinateGeometry_5c();
            coordinateGeometry_5d();
            coordinateGeometry_5e();
            break;

        default:
            cout << "You probably entered an incorrect value try again later!" << endl;
    }









    // End
    return 0;
}
