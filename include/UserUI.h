//
// Created by abdo on 7/9/25.
//

#ifndef USERUI_H
#define USERUI_H
#include "User.h"



class UserUI {

private:
    User user;
public:
    UserUI();
    UserUI(const User& user);
    void mainMenu();
    void deposit();
    void withdrew();
    void checkBalance();
    void changePIN();
};



#endif //USERUI_H
