#include <iostream>
#include <math.h>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

float roznica(float a, float b) {
    return a - b;
}

void wypisz() {
    cout << "test";
}

//zadanie 1

float circleField(float r) {
    if (r > 0) return r * r * 3.14;
    else {
        cout << "nieprawidlowy argument, ";
        return 0;
    }
}

float rectangleField(float a, float b) {
    if (a > 0 && b > 0) return a * b;
    else {
        cout << "nieprawidlowy argument, ";
        return 0;
    }
}

float triangleField(float a) {
    if (a > 0) return 0.5 * a * a * 1.73;
    else {
        cout << "nieprawidlowy argument, ";
        return 0;
    }
}

float cubeField(float a) {
    if (a > 0) return 6 * a * a;
    else {
        cout << "nieprawidlowy argument, ";
        return 0;
    }
}

float cylinerField(float r, float h) {
    if (r > 0 && h > 0) return (r * r * 6.18) + (6.18 * r * h);
    else {
        cout << "nieprawidlowy argument, ";
        return 0;
    }
}

float cubeVolume(float a) {
    if (a > 0) return a * a * a;
    else {
        cout << "nieprawidlowy argument, ";
        return 0;
    }
}

float cylinderVolume(float r, float h) {
    if (r > 0 && h > 0) return h * r * r * 3.14;
    else {
        cout << "nieprawidlowy argument, ";
        return 0;
    }
}

//zadanie 2

bool liczbaPierwsza(int liczba) {
    if (liczba < 2) {
        return false;
    } 
    else {
        int squareRoot = sqrt(liczba);
        bool primeNumber = true;
        for (int i = 2; i <= squareRoot; i++) {
            if (liczba % i == 0) primeNumber = false;
        }
        return primeNumber;
    }
}

//zadanie 3

void toBinary(int a) {
    string binary = "";
    while (a > 1) {
        if (a % 2 == 1) binary += "1";
        else binary += "0";
        a /= 2;
    }
    binary += "1";

    int n = binary.length();
    for (int i = 0; i < n / 2; i++)
        swap(binary[i], binary[n - i - 1]);
    
    cout << binary;
}

//zadanie 4

unsigned long long doubleFactorial(int n) {
    unsigned long long doubleFactorial = 1;
    if (n == 0) return 1;
    else if (n > 0 && n < 31) {
        for (int i = n; i > 0; i -= 2) doubleFactorial *= i;
        return doubleFactorial;
    }
}