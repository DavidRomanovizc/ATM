//
// Created by Romanov on 02.10.2021.
//
#pragma once
#ifndef ATM_GIT_ACCOUNT_H
#define ATM_GIT_ACCOUNT_H

#include <iostream>
#include <string>

int AccountDetails[] = {
        1234,        // pin
        100,        // checking account balance
        600,        // savings account balance
};

class User {
private:
    std::string username;
    int card_number, pin_code, type;
    double balance;


public:
    User(int type, const std::string &username, int card_number, int pin_code, int balance) {
        this->type = type;
        this->username = username;
        this->card_number = card_number;
        this->pin_code = pin_code;
        this->balance = balance;
    }


    int GetDeposit() {
        int depositAmount;
        std::cout << "Please enter an amount to deposit: " << "\n";
        std::cin >> depositAmount;

        int AccountBalance = this->balance += depositAmount;

        AccountDetails[this->type] = AccountBalance;
        std::cout << "\t$" << depositAmount << " was deposited into you account";
        getBalance();

        return 0;
    }

    int getWithdraw() {
        int withdraw_amount;

        std::cout << "Please enter amount to withdrawn:\n ";
        std::cin >> withdraw_amount;

        // Get account type
        if (withdraw_amount <= this->balance) {
            int AccountBalance = this->balance -= withdraw_amount;
            std::cout << "Dispensing... ";
            std::cout << "$" << withdraw_amount << "\n";

            // update the account balance
            AccountDetails[this->type] = AccountBalance;
            getBalance();
        } else {
            std::cout << "Insufficient funds" << "\n";
        }
        return 0;
    }

    // TODO: finish the implementation
    int getTransfer() {
        return 0;
    }

    // TODO: finish the implementation
    int getBalance() {
        return 0;
    }

};

#endif //ATM_GIT_ACCOUNT_H
