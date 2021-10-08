//
// Created by Romanov on 07.10.2021.
//
// ATM SYSTEM
// OBJECT-ORIENTED PROGRAMMING USING C++
//
//

#ifndef ATM_GIT_STATES_H
#define ATM_GIT_STATES_H

#include <iostream>

class Statement {
private:
    double m_deposit, m_withdraw, m_balance;
public:
    Statement();

    Statement(double deposit, double withdraw, double balance);

    double getDeposit();

    void setDeposit(double deposit);

    double getWithdraw();

    void setWithdraw(double withdraw);

    double getBalance();

    void setBalance(double balance);

    void inputDeposit();

    void inputWithdraw();

    void showBalance();

    void displayData();
};

#endif //ATM_GIT_STATES_H
