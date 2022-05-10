// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>
#include <string>
#include <cmath>

float VolumeOfCylinder(float radius, float height) {
    // I calculate volume
    float volume;

    // process
    volume = M_PI * height * pow(radius, 2);

    // output
    return volume;
}

main() {
    // I am the main function
    std::string strRadius;
    std::string strHeight;
    float fltRadius;
    float fltHeight;
    float calculatedVolume;

    // input
    std::cout << "This program calculates the volume of a cylinder.";
    std::cout << std::endl;
    std::cout << "Please enter radius and height." << std::endl;
    std::cout << std::endl;
    std::cout << "The radius is (mm): ";
    std::cin >> strRadius;
    std::cout << "The height is (mm): ";
    std::cin >> strHeight;
    std::cout << std::endl;

    // output
    try {
        fltHeight = std::stof(strHeight);
        fltRadius = std::stof(strRadius);
        calculatedVolume = VolumeOfCylinder(fltRadius, fltHeight);
        std:: cout << "The volume of a cylinder with radius " << fltRadius
        << " mm and height " << fltHeight
        << " mm is " << calculatedVolume
        << " mm²." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is not an float." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
