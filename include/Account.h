//
// Created by Romanov on 02.10.2021.
//
#pragma once
#ifndef ATM_GIT_ACCOUNT_H
#define ATM_GIT_ACCOUNT_H

#include <iostream>
#include <string>


class User {
private:
    std::string m_username;
    int m_card_number, m_pin_code, m_type;
    double m_balance;


public:
    User(int type, std::string username, int card_number, int pin_code, int balance);

    int type() const;

    std::basic_string<char> username();

    int card_number() const;

    int pin_code() const;

    int balance() const;

};

#endif //ATM_GIT_ACCOUNT_H
