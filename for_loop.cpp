// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This is for loop program

#include <iostream>
#include <string>
#include <cmath>

main() {
    std::string positiveString;
    int loopCounter;
    int sum;
    int positiveNumber;
    std::cout << "Enter the positive number : ";
    std::cin >> positiveString;
    std::cout << "" << std::endl;

    try {
        positiveNumber = std::stoi(positiveString);

        if (positiveNumber > 0) {
            for (loopCounter = 0, sum = 0; loopCounter <=
            positiveNumber; loopCounter++) {
                sum = pow(loopCounter, 2);
                std::cout << loopCounter << "²=" << sum << std::endl;
            }
        } else {
            std::cout << "This year is negative number";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not an integer";
    }
}
