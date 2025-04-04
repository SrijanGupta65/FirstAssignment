//
// Created by Srijan Gupta on 4/2/25.
//

#include "FreeStyleAssignment.h"

#include <iostream>
#include <__numeric/gcd_lcm.h>
// 16
std::string FreeStyleAssignment::loopMethod(double num) {

    while (true) {
        num /= 2;
        if (num == 1) {
            return "true";
        } else if (num < 1) {
            return "false";
        }

    }
}
// used ChatGPT for logic help
bool FreeStyleAssignment::isPrime(int num) {
    if (num <= 1) {
        return false;
    } else if (num == 2) {
        return true;
    } else if (num % 2 == 0) {
        return false;
    }

    for (int i = 3; i <= sqrt(num); i += 2) { // sqrt(num) because you dont need to check for further numbers
        if (num % i == 0) {
            return false;
        }
    }

    return true;


}
bool FreeStyleAssignment::reduceFraction(int num, int den) {
    int greatest_divisor = std::gcd(num, den);
    int newNum = num/greatest_divisor;
    int newDen = den/greatest_divisor;

    if (num/den == newNum/newDen) {
        return "true";
    }

    return false;
}

std::string nonLoopMethod(std::string num) {
    int base = 0;
}
