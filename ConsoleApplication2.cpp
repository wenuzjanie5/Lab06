#include <iostream>
#include <math.h>
#include "MFunkcje.h"

using namespace std;

int main()
{
    //zadanie 1
    cout << circleField(-2) << endl << triangleField(34) << endl << cubeVolume(9) << endl;

    //zadanie 2
    cout << "4 " << liczbaPierwsza(4) << "\n7 " << liczbaPierwsza(7) << "\n31 " << liczbaPierwsza(31) << "\n1 " << liczbaPierwsza(1) << "\n-31" << liczbaPierwsza(-31) << endl;
 
    //zadanie 3
    cout << "100 ";
    toBinary(100);
    cout << endl;
    cout << "45 ";
    toBinary(45);
    cout << endl;
    cout << "9 ";
    toBinary(9);
    cout << endl;
    cout << "2 ";
    toBinary(2);
    cout << endl;
    cout << "345 ";
    toBinary(345);
    cout << endl;

    //zadanie 4
    for (int i = 0; i < 31; i++) {
        cout << endl << i << "!! = " << doubleFactorial(i);
    }
    cout << "xftghsdfgh";
}
