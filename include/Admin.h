//
// Created by abdo on 7/9/25.
//

#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <vector>
#include "User.h"



class Admin {

private:
    std::string name;
    std::string email;
    int PIN;
    std::vector<User> users;

public:
    Admin();
    Admin(const std::string& name , const std::string& email , int PIN , const std::vector<User>&users);
    const std::string& getName() const;
    std::vector<User>& getUsers() ;
    bool addUser(const User& user ) ;
    bool removeUser(const std::string& userName) ;
    bool validate(const std::string& name , int PIN) const;
    // bool resetUserPIN(const std::string& userName , int PIN, std::vector<User>& users) const;
};



#endif //ADMIN_H
