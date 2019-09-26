// Copyright (c) 2019 St. Mother Teresa HS All Rights Reserved.
//
// Created By:Ben Lapuhapo.
// Created on:Sep 2019.
// This program is a simple calculator

#include <iostream>

int main() {
    // this function calculates area and perimeter
    int number_1;
    int number_2;
    int total;

    // input
    std::cout << "Enter the First Number :";
    std::cin >> number_1;
    std::cout << "Enter the Second Number :";
    std::cin >> number_2;

    // process
    total = number_1 + number_2;

    // output
    std::cout << "" << std::endl;
    std::cout <<number_1 <<" + "<< number_2 << " = " << total << std::endl;
}
