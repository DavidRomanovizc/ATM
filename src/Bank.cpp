//
// Created by Romanov on 03.10.2021.
//

#include <Bank.h>

#include <utility>

// Bank::Bank(std::string password, const char *card, double money)
//
//

Bank::Bank(std::string card, double money, std::string password)
        : m_password(std::move(password)),
          m_card(std::move(card)),
          m_money(money) {

}

Bank::Bank() {

}


void Bank::set_password(const std::string &password) {

}

void Bank::set_card(const std::string &card) {

}

void Bank::set_money(double money) {

}

void Bank::lock() {

}

int Bank::get_money() {
    return 0;
}

void Bank::in_money() {

}

void Bank::out_money() {

}

int Bank::change_password() {
    return 0;
}

void Bank::exit_system() {

}

