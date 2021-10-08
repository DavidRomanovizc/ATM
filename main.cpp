//
// Created by Romanov on 01.10.2021.
//
// ATM SYSTEM
// OBJECT-ORIENTED PROGRAMMING USING C++
//

#include "main.h"
#include "sha256.h"
#include <iostream>

int main() {
    SHA256 sha256;
    std::cout << sha256("David") << std::endl;
}