//
// Created by Srijan Gupta on 4/2/25.
//

#include "FreeStyleAssignment.h"

#include <iostream>
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

std::string FreeStyleAssignment::isPrime(int num) {

}
