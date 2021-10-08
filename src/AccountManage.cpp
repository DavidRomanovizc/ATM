//
// Created by Romanov on 08.10.2021.
//
// ATM SYSTEM
// OBJECT-ORIENTED PROGRAMMING USING C++
//
//

#include <AccountManage.h>

bool AccountManager::firstLogin() {
    std::ifstream fin;
    fin.open("account.bin", std::ios::in | std::ios::binary);
    if (!fin) return true;
    else fin.close();
    return false;

}

void AccountManager::setAccountInfo() {
    account.getData();
    std::ofstream fout;
    fout.open("account.bin", std::ios::in | std::ios::binary | std::ios::app);
    fout.write((char *) &account, sizeof(account));
    fout.close();

    statement.setDeposit(0);
    statement.setWithdraw(0);
    statement.setBalance(account.getBalance());
    fout.open("entries.bin", std::ios::in | std::ios::binary | std::ios::app);
    fout.write((char *) &statement, sizeof(statement));
    fout.close();
    std::cout << "\nAccount info has been set successfully!" << std::endl;
}

void AccountManager::balanceInquiry() {
    std::ifstream fin;
    fin.open("entries.bin", std::ios::in | std::ios::binary | std::ios::app);
    fin.seekg(-1, std::ios::end);
    fin.read((char *) &statement, sizeof(statement));
    statement.showBalance();
    fin.close();
}

void AccountManager::depositToAccount() {
    double openingBalance;
    double endingBalance;

    std::ifstream fin;
    fin.open("entries.bin", std::ios::in | std::ios::binary | std::ios::app);
    fin.seekg(-1, std::ios::end);
    fin.read((char *) &statement, sizeof(statement));
    openingBalance = statement.getBalance();
    statement.inputDeposit();
    statement.setWithdraw(0);
    endingBalance = openingBalance + statement.getDeposit() - statement.getWithdraw();
    statement.setBalance(endingBalance);

    std::ofstream fout;
    fout.open("entries.bin", std::ios::in | std::ios::binary | std::ios::app);
    fout.write((char *) &statement, sizeof(statement));
    fin.close();
    fout.close();

    std::cout << "\nTransaction successfully recorded!" << std::endl;
}

void AccountManager::withdrawFromAccount() {
    double openingBalance;
    double endingBalance;

    std::ifstream fin;
    fin.open("entries.bin", std::ios::in | std::ios::binary | std::ios::app);
    fin.seekg(-1, std::ios::end);
    fin.read((char *) &statement, sizeof(statement));
    openingBalance = statement.getBalance();
    statement.setDeposit(0);
    statement.inputWithdraw();
    endingBalance = openingBalance + statement.getDeposit() - statement.getWithdraw();
    statement.setBalance(endingBalance);

    std::ofstream fout;
    fout.open("entries.bin", std::ios::out | std::ios::binary | std::ios::app);
    fout.write((char *) &statement, sizeof(statement));
    fin.close();
    fout.close();

    std::cout << "\nTransaction successfully recorded!" << std::endl;
}

void AccountManager::displayStatement() {
    std::ifstream fin;

    std::cout << "==================== ACCOUNT STATEMENT ====================" << std::endl;
    fin.open("account.bin", std::ios::in | std::ios::binary | std::ios::app);
    while (fin.read((char *) &account, sizeof(account))) {
        account.displayData();
    }
    fin.close();

    std::cout << "\n=================== TRANSACTION HISTORY ===================" << std::endl;
    std::cout << "DEPOSIT\t\tWITHDRAWAL\t\tENDING BALANCE" << std::endl;
    fin.open("entries.bin", std::ios::in | std::ios::binary | std::ios::app);
    while (fin.read((char *) &statement, sizeof(statement))) {
        statement.displayData();
    }
    fin.close();
    std::cout << "\n=========================== END ===========================" << std::endl << std::endl;
}

