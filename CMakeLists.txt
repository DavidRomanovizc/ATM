cmake_minimum_required(VERSION 3.20)
project(ATM_git)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(include)

add_executable(ATM_git
        .gitignore
        LICENSE
        main.cpp
        main.h
        README.md
        include/sha256.h
        src/sha256.cpp
        include/Account.h
        src/account.cpp
        src/Menu.cpp
        include/Menu.h
        include/Bank.h
        src/Bank.cpp
        )