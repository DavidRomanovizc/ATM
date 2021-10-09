//
// Created by Romanov on 01.10.2021.
//

#ifndef ATM_GIT_MAIN_H
#define ATM_GIT_MAIN_H

#include <iostream>
#include "AccountManage.h"
#include "AccountRecord.h"
#include "PinCode.h"
#include "States.h"
#include "sha256.h"

enum {
    LOGIN = 1,
    EXIT
};

enum {
    INQUIRY = 1,
    DEPOSIT,
    WITHDRAWAL,
    VIEW_STATEMENT,
    RESET_PIN,
    RESET_ACCOUNT,
    QUIT
};


void logo() {
    std::cout << "\n============================= WELCOME TO LEAVE MANAGEMENT SYSTEM ============================"
              << std::endl;
}

void subMenu() {
    int option;
    Pin pin;
    Account account;
    Statement statement;
    AccountManager ACCManager;

    do {
        system("cls");

        if (AccountManager::firstLogin()) {
            std::cout << "First time login, please enter your account information." << std::endl << std::endl;
            ACCManager.setAccountInfo();
            system("PAUSE");
        } else {
            std::cout << "===== ACCOUNT MANAGEMENT =====" << std::endl;
            std::cout << "1. BALANCE INQUIRY" << std::endl;
            std::cout << "2. DEPOSIT" << std::endl;
            std::cout << "3. WITHDRAWAL" << std::endl;
            std::cout << "4. VIEW STATEMENT" << std::endl;
            std::cout << "5. RESET PIN" << std::endl;
            std::cout << "6. RESET ACCOUNT" << std::endl;
            std::cout << "7. EXIT" << std::endl;
            std::cout << "==============================" << std::endl;
            std::cout << "ENTER YOUR CHOICE: ";
            std::cin >> option;

            switch (option) {
                case INQUIRY:
                    system("cls");
                    ACCManager.balanceInquiry();
                    system("PAUSE");
                    break;

                case DEPOSIT:
                    system("cls");
                    ACCManager.depositToAccount();
                    system("PAUSE");
                    break;

                case WITHDRAWAL:
                    system("cls");
                    ACCManager.withdrawFromAccount();
                    system("PAUSE");
                    break;

                case VIEW_STATEMENT:
                    system("cls");
                    ACCManager.displayStatement();
                    system("PAUSE");
                    break;

                case RESET_PIN:
                    system("cls");
                    std::cout << "===== CURRENT PIN =====" << std::endl;
                    pin.inputPin();
                    pin.login();
                    if (pin.getAuthor() == true) {
                        system("cls");
                        std::cout << "===== NEW PIN =====" << std::endl;
                        pin.inputPin();
                        pin.resetPin();
                        system("PAUSE");
                    } else {
                        std::cout << "\nInvalid PIN!" << std::endl;
                        system("PAUSE");
                    }
                    break;

                case RESET_ACCOUNT:
                    system("cls");
                    char ch;
                    std::cout << "WARNING!!! ALL YOUR TRANSACTION HISTORY WILL BE DELETED." << std::endl;
                    std::cout << "CONTINUE? (Y/N): ";
                    std::cin >> ch;
                    if (ch == 'Y' || ch == 'y') {
                        std::cout << std::endl;
                        remove("account.bin");
                        remove("entries.bin");
                        ACCManager.setAccountInfo();
                        system("PAUSE");
                    } else {
                        std::cout << std::endl;
                        system("PAUSE");
                    }
                    break;

                case QUIT:
                    exit(0);
            }
        }
    } while (option != QUIT);
}

void mainMenu() {
    int option;
    Pin pin;

    do {
        system("cls");
        std::cout << "===== ATM LOGIN =====" << std::endl;
        std::cout << "1. LOGIN" << std::endl;
        std::cout << "2. EXIT" << std::endl;
        std::cout << "=====================" << std::endl;
        std::cout << "\nENTER YOUR CHOICE: ";
        std::cin >> option;

        switch (option) {
            case LOGIN:
                system("cls");
                if (pin.firstLogin()) {
                    std::cout << "First time login, please set new PIN." << std::endl << std::endl;
                    pin.inputPin();
                    pin.resetPin();
                    system("PAUSE");
                } else {
                    pin.inputPin();
                    pin.login();
                    if (pin.getAuthor() == true) {
                        subMenu();
                    } else {
                        std::cout << "\nInvalid PIN!" << std::endl;
                        system("PAUSE");
                    }
                }
                break;

            case EXIT:
                exit(0);
        }
    } while (option != EXIT);
};

#endif //ATM_GIT_MAIN_H

