// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on September 2020
// This program checks if an integer is negative, positive, or zero

#include <iostream>

int main() {
    // This function checks if an integer is negative, positive, or zero
    int integer;

    // Input
    std::cout << "Enter an Integer: ";
    std::cin >> integer;
    std::cout << "" << std::endl;

    // Process
    if (integer > 0) {
            // Output
            std::cout << "This integer is + (positive)!" << std::endl;
    } else if (integer < 0) {
        std::cout << "This integer is - (negative)!" << std::endl;
    } else {
        std::cout << "This integer is 0 (zero)!" << std::endl;
    }
}
