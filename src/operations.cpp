#include "../include/operations.h"
#include <iostream>
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b != 0) return a / b;
    else {
        std::cout << "Error: División por cero\n";
        return 0;
    }
}
double power(double a, double b) {
    if (!(a == 0 && b == 0)){
        for (int i = 0; i < b; i++) a *= a;
    }
    else {
        std::cout << "Error: 0^0 no esta definido\n";
        return 0;
    }
}