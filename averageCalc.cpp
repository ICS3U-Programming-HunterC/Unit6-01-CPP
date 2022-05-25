// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: May 19, 2022
// This program generates 10 random numbers between 1 and 100 and
// displays them to the user and then finds the average of all
// the numbers

#include <iostream>
#include <string>
#include <random>
#include <iomanip>


main() {
    // declare variables
    int MAX_SIZE = 10;
    int MAX_NUM = 100;
    int MIN_NUM = 0;
    int randomInt;
    int counter;

    // declare array
    int arrayOfNum[MAX_SIZE];

    // generate the random numbers
    for (counter = 0; counter < MAX_SIZE; counter ++) {
        // generate random number
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 100);
        randomInt = idist(rgen);

        // assign the random number to the array
        arrayOfNum[counter] = randomInt;

        // display the random number
        std::cout << arrayOfNum[counter] << " added to the list at position "
<< counter << "\n";
    }

    float sum = 0;

    // find the total of all the number
    for (counter = 0; counter < MAX_SIZE; counter ++) {
        sum = sum + arrayOfNum[counter];
    }

    // get the average
    float avg = sum / MAX_SIZE;
    std::cout << "\n";
    std::cout << "The average is: " << std::fixed << std::setprecision(1)
<< std::setfill('0') << avg << "\n";
}
