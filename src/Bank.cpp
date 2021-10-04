//
// Created by Romanov on 03.10.2021.
//

#include <Bank.h>

#include <utility>

Bank::Bank(std::string card, double money, std::string password)
        : m_password(std::move(password)),
          m_card(std::move(card)),
          m_money(money) {

}

Bank::Bank() {
    m_card = '0';
    m_money = '0';
    m_password = '0';
}


void Bank::set_password(const std::string &password) {

}

void Bank::set_card(std::string str) {
    m_card = std::move(str);
}

void Bank::set_money(double money) {
    m_money = money;
}

void Bank::lock() {
    if (times == 3) {
        show_lock();
        exit_system();
    }
}

int Bank::get_money() {
    return m_money;
}

void Bank::in_money() {

}

void Bank::out_money() {

}

int Bank::check(User &user) {
    std::string card_num, password;
    while (true) {
        std::cout << "Please enter card number: ";
        std::cin >> card_num;
        std::cout << "Please enter your password: ";
        std::cin >> password;

        if (m_card != card_num || m_password != password) {
            times++;
            if (times == 3) {
                lock();
                exit_system();
            }
            std::cout << std::endl
                      << "---------------------------------------------------------------------------------"
                      << std::endl << std::endl;
            std::cout << "The card number or password is incorrect, please re-enter!" << std::endl;
            std::cout << "Remaining input:" << 3 - times << std::endl;
            std::cout << std::endl
                      << "---------------------------------------------------------------------------------"
                      << std::endl << std::endl;
        } else break;
        return 1;
    }
}


int Bank::change_password() {
    return 0;
}

void Bank::exit_system() {
    exit(0);
}



