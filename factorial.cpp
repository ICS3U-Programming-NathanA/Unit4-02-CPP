// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Oct 26 2022
// This program determines the factorial of the users number it then displays it

#include <iostream>

// declare userNum as a integer
int userNum;

int main() {
    // declare counter and set it to 1
    // declare product and set it to 1
    int counter = 1;
    int product = 1;

    // declare userNumString as a string
    std::string userNumString;

    // get the users number
    std::cout << "Enter a integer: ";
    std::cin >> userNumString;

    // A try catch statement to catch
    // if the user enters a string or a decimal
    try {
        userNum = std::stoi(userNumString);
        // If statement to see if userNum is a negative
        if (userNum >= 0) {
            // While loop to calculate the factorial of the users number
            do {
                product *= counter;
                counter++;
            } while (counter <= userNum);
            std::cout << "The factorial of "
            << userNum << " = " << product << "\n";
        } else {
            std::cout << "Please enter a positive integer \n";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a integer\n";
    }
}
