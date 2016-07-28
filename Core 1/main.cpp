#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

// My Chapter Files
#include "algebraAndFunctions.h"
#include "quadraticFunctions.h"
using namespace std;



int main()
{
    setlocale(LC_ALL, "");
    SetConsoleOutputCP(65001);

    /*
        cout << "Welcome to chapter 1 A Level Mathematics in C++" << endl;
        algebraAndFunctions_1h();
    */

    cout << "Chapter 2: Quadratic Functions" << endl;
    quadraticFunctions_2b();
    return 0;
}
