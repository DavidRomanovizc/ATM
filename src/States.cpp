//
// Created by Romanov on 07.10.2021.
//

#include <States.h>

Statement::Statement(double deposit, double withdraw, double balance)
        : m_deposit(deposit),
          m_balance(balance),
          m_withdraw(withdraw) {

}

Statement::Statement()
        : m_deposit(0),
          m_withdraw(0),
          m_balance(0) {

}

double Statement::getDeposit() {
    return m_deposit;
}

void Statement::setDeposit(double deposit) {
    m_deposit = deposit;
}

double Statement::getWithdraw() {
    return m_withdraw;
}

void Statement::setWithdraw(double withdraw) {
    m_withdraw = withdraw;
}

double Statement::getBalance() {
    return m_balance;
}

void Statement::setBalance(double balance) {
    m_balance = balance;
}

void Statement::inputDeposit() {
    std::cout << "ENTER AMOUNT TO DEPOSIT: ";
    std::cin >> m_deposit;
}

void Statement::inputWithdraw() {
    std::cout << "ENTER AMOUNT TO WITHDRAW: ";
    std::cin >> m_withdraw;

}

void Statement::showBalance() {
    std::cout << "CURRENT BALANCE: " << m_balance << std::endl;
}

void Statement::displayData() {
    std::cout << m_deposit << "\t\t" << m_withdraw << "\t\t\t" << m_balance << std::endl;
}