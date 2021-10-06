//
// Created by Romanov on 06.10.2021.
//

#include <PinCode.h>


Pin::Pin()
        : m_code(0),
          m_author(false) {

}

Pin::Pin(int code, bool author)
        : m_code(code),
          m_author(author) {

}

int Pin::getPin() {
    return m_code;
}

void Pin::setPin(int code) {
    m_code = code;
}

int Pin::getAuthor() {
    return m_author;
}

void Pin::setAuthor(bool author) {
    m_author = author;
}

void Pin::inputPin() {
    std::cout << "ENTER PIN: " << std::endl;
    std::cin >> m_code;
    if (m_code <= 0 || m_code > 9999) {
        std::cout << "Invalid PIN, please enter 4 digits code only: " << std::endl;
        std::cin >> m_code;
    }
}

void Pin::resetPin() {
    std::ofstream fout;
    fout.open("pin.bin", std::ios::out | std::ios::binary);
    fout.write((char *) &m_code, sizeof(m_code));
    fout.close();
    std::cout << "\nPIN has been set successfully!" << std::endl;
}

void Pin::login() {
    int correctPin;
    std::ifstream fin;
    fin.open("pin.bin", std::ios::in | std::ios::binary);
    fin.read((char *) &correctPin, sizeof(correctPin));
    if (m_code == correctPin)
        m_author = true;
    else
        m_author = false;
    fin.close();
}

bool Pin::firstLogin() {
    std::ifstream fin;
    fin.open("pin.bin", std::ios::in | std::ios::binary);
    if (!fin)
        return true;
    return false;

}


