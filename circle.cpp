// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on March 2022
// global and local functions

#include <iostream>

// global variable
int variableX = 25;

void localVariable() {
    // this shows local variables
    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
        std::cout << "Local variableX, variableY, variableZ: "
            << variableX << "+" << variableY << "=" << variableZ << std::endl;
}
void globalVariable() {
    // this shows global variables
    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
        std::cout << "Global variableX, variableY, variableZ: "
            << variableX << "+" << variableY << "=" << variableZ << std::endl;
}


int main() {
    // this function calls local and global
    localVariable();
    globalVariable();
}
