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

int User::type() {
    return 0;
}

int User::username() {
    return 0;
}

int User::card_number() {
    return 0;
}

int User::pin_code() {
    return 0;
}

int User::balance() {
    return 0;
}


