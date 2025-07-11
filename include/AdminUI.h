//
// Created by abdo on 7/9/25.
//

#ifndef ADMINUI_H
#define ADMINUI_H
#include "Admin.h"
#include <iostream>


class AdminUI {

private:
    Admin admin;

public:
    AdminUI();
    AdminUI(const Admin& admin);
    void printUsers();
    void addUser();
    void removeUser();
    void displayAdminMenu();
};



#endif //ADMINUI_H
