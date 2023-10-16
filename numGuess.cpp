// Copyright (c) 2021 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Oct, 11, 2023
// This program will ask the user for a number between
// 1 and 10 then check if they guessed my number

#include <iostream>
// Include this for std::setprecision
#include <cmath>
#include <iomanip>

int main() {
    // declare CORRECT_GUESS constant
    const int CORRECT_GUESS = 6;

    // declare userGuess variable
    int userGuess;

    // get the userGuess and display message
    std::cout << "This program asks the user for the a number from ";
    std::cout << "\n1 to 10  and then displays if you guess correctly or not.";
    std::cout << "Enter your guess between 1 and 10: ";
    std::cin >> userGuess;

    if (userGuess == CORRECT_GUESS) {
        // display that the user answer is correct
        std::cout << "\n";
        std::cout << "Congratulations you guessed correctly";
    }

    if (userGuess == CORRECT_GUESS) {
        // display that the user answer is correct
        std::cout << "\n";
        std::cout << "Please guess again";
    }
}
