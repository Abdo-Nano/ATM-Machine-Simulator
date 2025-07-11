//
// Created by abdo on 7/9/25.
//

#include "../include/AdminUI.h"
#include <iomanip>

void display() {
    // Header
    std::cout << "\n";
    std::cout << std::setw(32) << std::setfill('=') << "" << "\n";
    std::cout << std::setw(21) << std::setfill(' ') << "ADMIN MENU" << "\n";
    std::cout << std::setw(32) << std::setfill('=') << "" << "\n";

    // Menu items
    std::cout << std::left;
    std::cout << std::setw(2) << "1." << " View All Accounts\n";
    std::cout << std::setw(2) << "2." << " Add New Account\n";
    std::cout << std::setw(2) << "3." << " Delete Account\n";
    std::cout << std::setw(2) << "4." << " Exit Admin Mode\n";

    // Footer and prompt
    std::cout << std::setw(32) << std::setfill('-') << "" << "\n";
}

void AdminUI::displayAdminMenu() {

    int choice;

    do {
        display();
        std::cout << "enter your choice: "; std::cin >> choice;
        switch (choice) {
            case 1:
                printUsers();
                break;
            case 2:
                addUser();
                break;
            case 3:
                removeUser();
                break;
            default:
                break;

        }
    } while (choice != 4);
}

AdminUI::AdminUI() = default;

AdminUI::AdminUI(const Admin &admin) {
    this->admin = admin;
    displayAdminMenu();
}

void AdminUI::printUsers() {
    for (auto& user : admin.getUsers()) {
        std::cout << user.getUserName() << " " << user.checkBalance() << std::endl;
    }
}



void AdminUI::addUser() {
    std::string userName;
    std::string email;
    int PIN;

    std::cout << "enter your username: "; std::cin >> userName;
    std::cout << "enter your email: "; std::cin >> email;
    std::cout << "enter your PIN: "; std::cin >> PIN;

    User user(userName , email , PIN);
    admin.addUser(user);
    std::cout << "user added successfully." << std::endl;
}

void AdminUI::removeUser() {
    std::string userName;
    std::cout << "enter your username: "; std::cin >> userName;
    this->admin.removeUser(userName);
    std::cout << "the user removed successfully."<< std::endl;
}
