//
// Created by Romanov on 06.10.2021.
//

#ifndef ATM_GIT_PINCODE_H
#define ATM_GIT_PINCODE_H

#include <iostream>
#include <fstream>

class Pin {
private:
    int m_code;
    bool m_author;
public:
    Pin();

    Pin(int code, bool author);

    int getPin();

    void setPin(int code);

    int getAuthor();

    void setAuthor(bool author);

    void inputPin();

    void resetPin();

    void login();

    bool firstLogin();
};

#endif //ATM_GIT_PINCODE_H
