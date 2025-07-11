//
// Created by abdo on 7/9/25.
//

#include "../include/User.h"
#include <algorithm>
#include "../include/Admin.h"

User::User() = default;

User::User(const std::string &userName, const std::string &email, int PIN, unsigned int balance):
    userName(userName),
    email(email),
    PIN(PIN),
    balance(balance){}


bool User::deposit(int amount) {
    if (amount <= 0)
        throw std::runtime_error("the amount should be positive number");
    this->balance += amount;
    return true;
}


bool User::withdrew(int amount) {
    if (amount <= 0)
        throw std::runtime_error("the amount should be positive number");
    if (amount > this->balance)
        throw std::runtime_error("the amount should be less than or equal the balance");
    this->balance -= amount;
    return true;
}

int User::checkBalance() const {
    return this->balance;
}

bool User::changePIN(int oldPIN, int newPIN) {
    if (oldPIN != this->PIN)
        throw std::runtime_error("the password is not correct");
    this->PIN = newPIN;
    return true;
}

const std::string &User::getUserName() const {
    return this->userName;
}

bool User::validate(const std::string &userName, int PIN) {
    return this->userName == userName && this->PIN == PIN;
}

void User::addAmount(int amount) {
    if (amount <= 0)
        throw std::invalid_argument("the amount should be positive number");
    this->balance += amount;
}


