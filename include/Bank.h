//
// Created by Romanov on 03.10.2021.
//

#ifndef ATM_GIT_BANK_H
#define ATM_GIT_BANK_H
#pragma once

#include <string>
#include "Account.h"

class Bank {
private:
    std::string m_password;
    std::string m_card;
    double m_money;
public:
    static int times;

    Bank();

    Bank(std::string, double, std::string);

    void set_password(const std::string &password); // Create a password function

    void set_card(const std::string &card); // Create an account function

    void set_money(double money); // Initialization balance function

    int check(); // check the account password function

    void lock(); // Lock card function

    int get_money(); // Get the balance function

    void in_money(); // Deposit function

    void out_money(); // Remove the function

    int change_password(); // Change the password function

    void exit_system(); // Exit the user's operating interface function
};

int Bank::times = 0;
#endif //ATM_GIT_BANK_H
