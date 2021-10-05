//
// Created by Romanov on 01.10.2021.
//
// ATM SYSTEM
// OBJECT-ORIENTED PROGRAMMING USING C++
//
//
#include <AccountRecord.h>
#include <utility>
#include <iostream>

Account::Account(int number, std::string name, std::string fullname, double balance)
        : m_number(number),
          m_fullname(std::move(fullname)),
          m_name(std::move(name)),
          m_balance(balance) {

}

Account::Account()
        : m_number(0),
          m_fullname("Unknown"),
          m_balance(0) {}

int Account::getAccountNumber() {
    return m_number;
}

void Account::setAccountNumber(int number) {
    m_number = number;
}

std::string Account::getName() {
    return m_fullname;
}

void Account::setName(std::string fullname) {
    m_fullname = std::move(fullname);
}

std::basic_string<char> Account::naming() {
    return m_name;
}


void Account::hashName(const std::string &name) {
    m_name = name;
}


double Account::getBalance() {
    return m_balance;
}

void Account::setBalance(double balance) {
    m_balance = balance;
}

void Account::getData() {
    std::cout << "ENTER ACCOUNT NUMBER: ";
    std::cin >> m_number;
    std::cout << "ENTER ACCOUNT NAME: ";
    std::cin >> m_name;
    std::cout << "ENTER BALANCE: ";
    std::cin >> m_balance;
}

void Account::displayData() {
    std::cout << "Account number :" << m_number << std::endl;
    std::cout << "INITIAL BALANCE :" << m_balance << std::endl;
}

void Account::showBalance() {
    std::cout << "CURRENT BALANCE: " << m_balance << std::endl << std::endl;
}



