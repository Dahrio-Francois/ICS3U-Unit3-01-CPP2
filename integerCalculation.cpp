// Copyright (c) 2022 Dahrio Francois All rights reserved
//
// Created by: Dahrio Francois
// Created on: Feb 2022
// This program calculates the total of two integers
//      with user input

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the area and perimeter
    int integer1;
    int integer2;
    int calculation;

    // input
    std::cout << "Enter the first number to add (integer): ";
    std::cin >> integer1;
    std::cout << "Enter the second number to add (integer): ";
    std::cin >> integer2;

    // process
    calculation = integer1+integer2;

    // output
    std::cout << "" << std::endl;
    std::cout << integer1 << " + " << integer2 << " = "
    << calculation << std::endl;

    std::cout << "\nDone." << std::endl;
}
