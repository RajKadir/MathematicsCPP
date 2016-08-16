#include <iostream>
using namespace std;

/* Chapter Files */
#include "algebraAndFunctions.h"
#include "theSineAndCosineRule.h"
#include "exponentialsAndLogarithms.h"
#include "coordinateGeometryInTheXYPlane.h"
#include "theBinomialExpansion.h"
#include "radianMeasureAndItsApplications.h";
#include "geometricSequencesAndSeries.h"
#include "graphsOfTrigonometricFunctions.h"
#include "differentiation.h"
#include "trigonometricalIdentitiesAndSimpleEquations.h"
#include "integration.h"

/* Extras */
#include "formulae.h"

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
            algebraAndFunctions_summary();
            break;
        /*
            The sine and cosine rule
        */
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

        /*
            Exponentials and Logarithms
        */
        case 3:
            exponentialsAndLogarithms_3a();
            exponentialsAndLogarithms_3b();
            exponentialsAndLogarithms_3c();
            exponentialsAndLogarithms_3d();
            exponentialsAndLogarithms_3e();
            exponentialsAndLogarithms_3f();
            exponentialsAndLogarithms_summary();
            break;
        /*
            Coordinate geometry in the XY plane
        */
        case 4:
            coordinateGeometryInTheXYPlane_4a();
            coordinateGeometryInTheXYPlane_4b();
            coordinateGeometryInTheXYPlane_4c();
            coordinateGeometryInTheXYPlane_4d();
            coordinateGeometryInTheXYPlane_4e();
            coordinateGeometryInTheXYPlane_summary();
            break;
        /*
            The Binomial Expansion
        */
        case 5:
            theBinomialExpansion_5a();
            theBinomialExpansion_5b();
            theBinomialExpansion_5c();
            theBinomialExpansion_5d();
            theBinomialExpansion_summary();
            break;
        /*
            Radian Measure and its Applications
        */
        case 6:
            radianMeasureAndItsApplications_6a();
            radianMeasureAndItsApplications_6b();
            radianMeasureAndItsApplications_6c();
            radianMeasureAndItsApplications_summary();
            break;
        /*
            Geometric Sequences and Series
        */
        case 7:
            geometricSequencesAndSeries_7a();
            geometricSequencesAndSeries_7b();
            geometricSequencesAndSeries_7c();
            geometricSequencesAndSeries_7d();
            geometricSequencesAndSeries_7e();
            geometricSequencesAndSeries_summary();
            break;
        /*
            Graphs of Trigonometric Functions - On Paper
        */
        case 8:
            graphsOfTrigonometricFunctions_8a();
            graphsOfTrigonometricFunctions_8b();
            graphsOfTrigonometricFunctions_8c();
            graphsOfTrigonometricFunctions_8d();
            graphsOfTrigonometricFunctions_8e();
            graphsOfTrigonometricFunctions_8f();
            graphsOfTrigonometricFunctions_summary();
            break;
        /*
            Differentiation
        */
        case 9:
            differentiation_9a();
            differentiation_9b();
            differentiation_9c();
            differentiation_summary();
            break;
        /*
            Trigonometrical Identities and Simple Equations
        */
        case 10:
            trigonometricalIdentitiesAndSimpleEquations_10a();
            trigonometricalIdentitiesAndSimpleEquations_10b();
            trigonometricalIdentitiesAndSimpleEquations_10c();
            trigonometricalIdentitiesAndSimpleEquations_10d();
            trigonometricalIdentitiesAndSimpleEquations_summary();
            break;
        /*
            Integration
        */
        case 11:
            integration_11a();
            integration_11b();
            integration_11c();
            integration_11d();
            integration_11e();
            integration_summary();
            break;
        /*
            Formulae needed to remember
        */
        case 12:
            formulae_logarithms();
            formulae_trigonometry();
            formulae_area();
            formulae_symbols();
            break;
        /*
            Summary of chapters
        */
        case 13:
            algebraAndFunctions_summary();
            theSineAndCosineRule_summary();
            exponentialsAndLogarithms_summary();
            coordinateGeometryInTheXYPlane_summary();
            theBinomialExpansion_summary();
            radianMeasureAndItsApplications_summary();
            geometricSequencesAndSeries_summary();
            graphsOfTrigonometricFunctions_summary();
            differentiation_summary();
            trigonometricalIdentitiesAndSimpleEquations_summary();
            integration_summary();
            break;

        default:
            cout << "You probably entered an incorrect value try again later!" << endl;
            /* Flag to end loop and program */
            quit = true;
            break;
    }
}
int main(){

    int chapter;
    while(!quit){
        cout << "Welcome to my A-Level testing in Core 2. " << endl;
        cout << "Which Chapter would you like to visit? 1-12" << endl;
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
        cout << "\t 13. Summary of all chapters. " << endl;
        cin >> chapter;
        selectChapters(chapter);
    }
    return 0;
}
