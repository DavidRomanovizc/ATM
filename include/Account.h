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

    void type() const;

    void username() const;

    void card_number() const;

    void pin_code() const;

    void balance() const;

};

#endif //ATM_GIT_ACCOUNT_H
