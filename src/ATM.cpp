//
// Created by abdo on 7/9/25.
//

#include "../include/ATM.h"
#include <iomanip>
#include  <iostream>
#include <limits>

ATM::ATM() {

}

ATM::ATM(std::vector<User> &users , std::vector<Admin>& admins) {
    this->users = users;
    this->admins = admins;
}


void ATM::showModelSelection() {
    while (true) {
        std::cout << "\n===== ATM SYSTEM =====\n";
        std::cout << "1. User Login\n";
        std::cout << "2. Admin Login\n";
        std::cout << "3. Exit\n";
        std::cout << "Select mode: ";

        int choice;
        std::cin >> choice;
        clearInputBuffer();

        switch (choice) {
            case 1: userLogin(); break;
            case 2: adminLogin(); break;
            case 3: return;
            default: std::cout << "Invalid choice!\n";
        }
    }
}

void ATM::clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


void ATM::userLogin() {
    std::string userName;
    int PIN;

    std::cout << "enter the username: "; std::cin >> userName;
    std::cout << "enter the PIN: "; std::cin >> PIN;

    for (auto& user : this->users) {
        if (user.getUserName() == userName) {
            if (user.validate(userName , PIN)) {
                UserUI user_ui(user);
                break;
            } else
                std::cout << "the password is wrong" << std::endl;
        }
    }
    std::cout << "the user is not found" << std::endl;

}


void ATM::adminLogin() {
    std::string userName;
    int PIN;

    std::cout << "enter the username: "; std::cin >> userName;
    std::cout << "enter the PIN: "; std::cin >> PIN;

    for (auto& admin: this->admins) {
        if (admin.getName() == userName) {
            if (admin.validate(userName , PIN)) {
                AdminUI adminui(admin);
                break;
            } else
                std::cout << "the password is wrong" << std::endl;
        }
    }
    std::cout << "the admin is not found" << std::endl;
}

std::vector<User> &ATM::getUsers() {
    return users;
}




