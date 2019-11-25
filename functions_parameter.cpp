// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: November 2019
// This program uses user defined functions

#include <iostream>
#include <string>

void CalculateArea(float base, float height) {
    // calculate area
    float area;

    // process
    area = (base * height)/2;

    // output
    std::cout << std::endl;
    std::cout << "The area is " << area << " cm²" << std::endl;
}


main() {
    // this function gets length and width
    std::string heightString;
    std::string baseString;
    float heightFromUser;
    float baseFromUser;

    // input
    std::cout << "Welcome to the area triangle calculator." << std::endl;
    std::cout << std::endl;
    std::cout << "Enter the base of triangle (cm): ";
    std::cin >> baseString;
    try {
        baseFromUser = std::stof(baseString);
        std::cout << "Enter the height of triangle (cm): ";
        std::cin >> heightString;
        try {
            heightFromUser = std::stof(heightString);
            // call functions
           CalculateArea(baseFromUser, heightFromUser);
        } catch (std::invalid_argument) {
            std::cout << "Wrong input. Try again." << std::endl; }
    } catch (std::invalid_argument) {
        std::cout << "Wrong input. Try again." << std::endl; }
}
