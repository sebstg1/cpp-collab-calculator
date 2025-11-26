#include "operations.h"
#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b != 0) return a / b;
    else {
        cout << "Error: División por cero\n";
        return 0;
    }
}

int modulo(int a, int b) {
    if (b != 0) return a % b;
    else {
        cout << "Error: Módulo por cero\n";
        return 0;
    }
}