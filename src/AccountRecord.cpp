//
// Created by Romanov on 04.10.2021.
//

#include <ctime>
#include <AccountRecord.h>
#include <ctime>
#include <utility>

Account::Account(std::time_t Settlement_account, std::vector<int> Income, int Income_cnt)
        : m_Settlement_account(Settlement_account),
          m_Income(std::move(Income)),
          m_Income_cnt(Income_cnt) {
    m_Settlement_account = std::time(nullptr);
    m_Income.clear();
    m_Income_cnt = 0;
}

void Account::Writedocument(std::ofstream &) {

}

Account &Account::Read(std::ifstream &) {

}

std::time_t Account::GetFreeTime() {
    return m_Settlement_account;
}

std::vector<int> Account::GetIncome() {
    return m_Income;
}

void Account::UpdateFreeTime(std::time_t) {

}

void Account::UpdateIncome(const std::vector<int> &) {

}

void Account::Free_Account() {

}

bool Account::Is_Free() {
    std::time_t freeze;
    time(&freeze);
    freeze += 60 * 60 * 24;
    m_Settlement_account = freeze;
}

void Account::Add_Income(int temp) {
    m_Income.push_back(temp);
    m_Income_cnt = m_Income.size();
}

void Account::Display_Income() {

}


