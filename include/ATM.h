//
// Created by abdo on 7/9/25.
//

#ifndef ATM_H
#define ATM_H
#include <vector>
#include <iostream>
#include "UserUI.h"
#include "AdminUI.h"



class ATM {

private:
    std::vector<User> users;
    std::vector<Admin> admins;

public:
    ATM();
    ATM(std::vector<User>& users , std::vector<Admin>& admins);
    void userLogin();
    void adminLogin();
    void showModelSelection();
    void clearInputBuffer();
    std::vector<User>& getUsers();
};



#endif //ATM_H
