//
// Created by Romanov on 04.10.2021.
//

#ifndef ATM_GIT_ACCOUNTRECORD_H
#define ATM_GIT_ACCOUNTRECORD_H

#include <ctime>
#include <vector>
#include <fstream>

class Account {
private:
    std::time_t m_Settlement_account;
    std::vector<int> m_Income;
    int m_Income_cnt; // Number of income and expenditure records
public:
    friend class AccountItem;

    Account(std::time_t Settlement_account, std::vector<int> Income, int Income_cnt);

    void Writedocument(std::ofstream &);

    Account &Read(std::ifstream &);

    std::time_t GetFreeTime();

    std::vector<int> GetIncome();

    void UpdateFreeTime(std::time_t);

    void UpdateIncome(const std::vector<int> &);

    void Free_Account();

    bool Is_Free();

    void Add_Income(int);

    void Display_Income();
};

#endif //ATM_GIT_ACCOUNTRECORD_H
