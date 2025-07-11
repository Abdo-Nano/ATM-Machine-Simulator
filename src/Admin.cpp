//
// Created by abdo on 7/9/25.
//

#include "../include/Admin.h"


Admin::Admin() = default;

Admin::Admin(const std::string &name, const std::string &email, int PIN , const std::vector<User>& users):
    name(name),
    email(email),
    PIN(PIN),
    users(users){}


bool Admin::addUser(const User &user) {
    users.push_back(user);
    return true;
}

const std::string &Admin::getName() const {
    return this->name;
}


bool Admin::removeUser(const std::string &userName) {
    for (auto it = users.begin() ; it != users.end() ;it++) {
        if (it->getUserName() == userName) {
            users.erase(it);
            return true;
        }
    }
    throw std::runtime_error("the admin is not found");
}

std::vector<User> &Admin::getUsers() {
    return this->users;
}

bool Admin::validate(const std::string &name, int PIN) const{
    return this->name == name && this->PIN == PIN;
}

