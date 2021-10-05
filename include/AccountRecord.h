//
// Created by Romanov on 01.10.2021.
//
// ATM SYSTEM
// OBJECT-ORIENTED PROGRAMMING USING C++
//
//

#ifndef ATM_GIT_ACCOUNTRECORD_H
#define ATM_GIT_ACCOUNTRECORD_H

#include <string>
#include "sha256.h"

class Account {
private:
    SHA256 sha256;
    int m_number;
    std::string m_fullname;
    std::string m_name = sha256(m_fullname);
    double m_balance;

public:
    Account();

    Account(int number, std::string name, std::string fullname, double balance);

    int getAccountNumber();

    void setAccountNumber(int number);

    std::string getName();

    void setName(std::string fullname);

    std::basic_string<char> naming();

    void hashName(const std::string& name);

    double getBalance();

    void setBalance(double balance);

    void getData();

    void displayData();

    void showBalance();

};


#endif //ATM_GIT_ACCOUNTRECORD_H
