//
// Created by abdo on 7/9/25.
//

#ifndef USER_H
#define USER_H
#include <iostream>
#include <vector>
#include <memory>


class User {
private:
    std::string userName;
    std::string email;
    int PIN{};
    unsigned int balance{};
    void addAmount(int amount);

public:
    User();
    User(const std::string& userName , const std::string& email , int PIN , unsigned int balance = 0);
    const std::string& getUserName() const;
    bool deposit(int amount);
    bool withdrew(int amount);
    int checkBalance() const;
    bool changePIN(int oldPIN , int newPIN);
    bool validate(const std::string& userName , int PIN);
};



#endif //USER_H
