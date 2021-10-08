//
// Created by Romanov on 08.10.2021.
//
// ATM SYSTEM
// OBJECT-ORIENTED PROGRAMMING USING C++
//
//

#ifndef ATM_GIT_ACCOUNTMANAGE_H
#define ATM_GIT_ACCOUNTMANAGE_H

#include <iostream>
#include <fstream>
#include <string>
#include "AccountRecord.h"
#include "States.h"

class AccountManager {
private:
    Account account;
    Statement statement;
public:
    static bool firstLogin();

    void setAccountInfo();

    void balanceInquiry();

    void depositToAccount();

    void withdrawFromAccount();

    void displayStatement();
};

#endif //ATM_GIT_ACCOUNTMANAGE_H
