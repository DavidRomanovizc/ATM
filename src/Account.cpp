//
// Created by Romanov on 02.10.2021.
//

#include <Account.h>
#include <string>
#include <utility>

void menu();

void account(int option);

int AccountDetails[] = {
        1234,        // pin
        100,        // checking account balance
        600,        // savings account balance
};


User::User(int type, std::string username, int card_number, int pin_code, int balance)
        : m_type(type),
          m_username(std::move(username)),
          m_card_number(card_number),
          m_pin_code(pin_code),
          m_balance(balance) {

}

void User::type() const {

}

void User::username() const {

}

void User::card_number() const {

}

void User::pin_code() const {

}

void User::balance() const {

}



