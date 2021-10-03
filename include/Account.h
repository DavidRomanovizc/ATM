//
// Created by Romanov on 02.10.2021.
//
#pragma once
#ifndef ATM_GIT_ACCOUNT_H
#define ATM_GIT_ACCOUNT_H

#include <iostream>
#include <string>
#include "Bank.h"


class User : public Bank {
public:
    User(std::string card, double money, std::string password)
            : Bank(std::move(card), money, std::move(password)) {}

    User(); // User function interface

    void show(); // User function interface

    void show_lock(); // Lock Card Tip

    void show_change_success(); // Multiple change password prompt

    void show_reEnter(); // Re-enter prompt

    void show_reOperate(); // Re-operate prompt

    void show_change_error(); // Password error prompt

    void show_amount_error(); // amount error prompt

    void show_beyond_amount(); // Excess extraction prompt

    void show_noEnough_amount(); // Balance is insufficient
};

#endif //ATM_GIT_ACCOUNT_H
