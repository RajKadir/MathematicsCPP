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
#include "sequenceAndSeries.h"
#include "differentiation.h"
#include "integration.h"

using namespace std;

/* Global */
bool quit = false;

void selectChapters(int chapter){
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
            sketchingCurves_3a();
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


        case 6:
            /*
                Chapter 6 - Sequences and Series
            */
            sequenceAndSeries_6a();
            sequenceAndSeries_6b();
            sequenceAndSeries_6c();
            sequenceAndSeries_6d();
            sequenceAndSeries_6e();
            sequenceAndSeries_6f();
            sequenceAndSeries_6g();
            sequenceAndSeries_6h();
            break;


        case 7:
            /*
                Chapter 7 - Differentiation
            */
            differentiation_7a();
            differentiation_7b();
            differentiation_7c();
            differentiation_7d();
            differentiation_7e();
            differentiation_7f();
            differentiation_7g();
            differentiation_7h();
            break;



        case 8:
            /*
                Chapter 8 - Integration
            */
            integration_8a();
            integration_8b();
            integration_8c();
            integration_8d();
            integration_8e();
            integration_summary();

            break;

        default:
            cout << "You probably entered an incorrect value try again later!" << endl;
            /* Flag to end loop */
            quit = true;
    }

}


int main()
{

    /* Stores what chapter to view. */
    int chapter;

    /*
        Main loop
    */
    while(quit==false){

        cout << "Welcome to my A-Level testing in Core 1. " << endl;
        cout << "Which Chapter would you like to visit? 1-8" << endl;
        cout << "\t 1. Algebra and Functions" << endl;
        cout << "\t 2. Quadratic Functions" << endl;
        cout << "\t 3. Sketching Graphs " << endl;
        cout << "\t 4. Equations and Inequalities" << endl;
        cout << "\t 5. Coordinate Geometry" << endl;
        cout << "\t 6. Sequences and Series" << endl;
        cout << "\t 7. Differentiation" << endl;
        cout << "\t 8. Integration" << endl;
        cin >> chapter;
        selectChapters(chapter);
    }


    /* End */
    return 0;
}
