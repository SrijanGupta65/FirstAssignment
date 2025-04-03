#include <iostream>

#include "FreeStyleAssignment.h"


int main() {
    FreeStyleAssignment var;
    //test cases
    std::cout << var.loopMethod(11) << "\n"; // should return false
    std::cout << var.loopMethod(64)<< "\n"; // should return true
    std::cout << var.loopMethod(10)<< "\n"; // should return false
    std::cout << var.loopMethod(128)<< "\n"; // should return true

    return 0;
}
