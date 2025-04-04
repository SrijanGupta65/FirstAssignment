#include <iostream>

#include "FreeStyleAssignment.h"


int main() {
    FreeStyleAssignment var;

    std::cout << "Loop method test cases:" << std::endl;
    //Loop method test cases
    std::cout << var.loopMethod(11) << "\n"; // should return false
    std::cout << var.loopMethod(64)<< "\n"; // should return true
    std::cout << var.loopMethod(10)<< "\n"; // should return false
    std::cout << var.loopMethod(128)<< "\n"; // should return true

    std::cout << "Prime number test cases:" << std::endl;


    // Prime number test cases
    if (var.isPrime(11)) {
        std::cout << "PASS" << std::endl;
    } else {
        std::cout << "FAIL" << std::endl;
    }
    if (var.isPrime(29)) {
        std::cout << "PASS" << std::endl;
    }else {
        std::cout << "FAIL" << std::endl;
    }
    if (!var.isPrime(30)) {
        std::cout << "PASS" << std::endl;
    }else {
        std::cout << "FAIL" << std::endl;
    }

    std::cout << "Reduced Fraction test cases" << std::endl;

    std::cout << var.reduceFraction(4, 8) << "\n";

    return 0;
};

