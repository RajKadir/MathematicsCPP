#include <iostream>
using namespace std;

/* Chapter Files */
#include "kinematicsOfAParticleMovingInAStraightLine.h"
#include "dynamicsOfAParticleMovingInAStraightLine.h"
#include "staticsOfAParticle.h"
#include "moments.h"
#include "vectors.h"
/* Extras */


/* Global */
bool quit = false;

void selectChapters(int chapter){
    switch(chapter){
        case 1:
            break;
        case 2:
            kinematicsOfAParticleMovingInAStraightLine_2a();
            kinematicsOfAParticleMovingInAStraightLine_2b();
            kinematicsOfAParticleMovingInAStraightLine_2c();
            kinematicsOfAParticleMovingInAStraightLine_2d();
            kinematicsOfAParticleMovingInAStraightLine_summary();
            break;
        case 3:
            dynamicsOfAParticleMovingInAStraightLine_3a();
            dynamicsOfAParticleMovingInAStraightLine_3b();
            dynamicsOfAParticleMovingInAStraightLine_3c();
            dynamicsOfAParticleMovingInAStraightLine_3d();
            dynamicsOfAParticleMovingInAStraightLine_3e();
            dynamicsOfAParticleMovingInAStraightLine_3f();
            dynamicsOfAParticleMovingInAStraightLine_3g();
            dynamicsOfAParticleMovingInAStraightLine_3h();
            dynamicsOfAParticleMovingInAStraightLine_summary();
            break;
        case 4:
            staticsOfAParticle_4a();
            staticsOfAParticle_4b();
            staticsOfAParticle_4c();
            staticsOfAParticle_summary();
            break;
        case 5:
            moments_5a();
            moments_5b();
            moments_5c();
            moments_5d();
            moments_summary();
            break;
        case 6:
            vectors_6a();
            vectors_6b();
            vectors_6c();
            vectors_6d();
            vectors_6e();
            vectors_summary();
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
        cout << "Welcome to my A-Level testing in Mechanics 1. " << endl;
        cout << "Which Chapter would you like to visit? 1-6" << endl;
        cout << "\t 1. Mathematical models in mechanics" << endl;
        cout << "\t 2. Kinematics of a particle moving in a straight line" << endl;
        cout << "\t 3. Dynamics of a particle moving in a straight line" << endl;
        cout << "\t 4. Statics of a particle " << endl;
        cout << "\t 5. Moments" << endl;
        cout << "\t 6. Vectors" << endl;
        cin >> chapter;
        selectChapters(chapter);
    }
    return 0;
}
