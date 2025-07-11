//
// Created by abdo on 7/9/25.
//

#include "../include/UserUI.h"
#include <iomanip>
#include "../include/Admin.h"
#include "../include/ATM.h"

UserUI::UserUI(const User &user) {
    this->user = user;
    this->mainMenu();
}



void UserUI::mainMenu() {

    int choice;
    do{
        // Header
        std::cout << "\n";
        std::cout << std::setw(32) << std::setfill('=') << "" << "\n";
        std::cout << std::setw(21) << std::setfill(' ') << "MAIN MENU" << "\n";
        std::cout << std::setw(32) << std::setfill('=') << "" << "\n";

        // Menu items
        std::cout << std::left;
        std::cout << std::setw(2) << "1." << " Check Balance\n";
        std::cout << std::setw(2) << "2." << " Deposit\n";
        std::cout << std::setw(2) << "3." << " Withdraw\n";
        std::cout << std::setw(2) << "4." << " Change PIN\n";
        std::cout << std::setw(2) << "5." << " transfer \n";
        std::cout << std::setw(2) << "6." << " Logout\n";

        // Footer and prompt
        std::cout << std::setw(32) << std::setfill('-') << "" << "\n";

        std::cout << "enter your choice: "; std::cin >> choice;
        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdrew();
                break;
            case 4:
                break;
            case 5:
                break;
        }
    } while (choice != 6);

}



void UserUI::checkBalance() {
    std::cout << user.checkBalance() << std::endl;
}


void UserUI::deposit() {
    int amount;
    try {
        std::cout << "enter the amount: "; std::cin >> amount;
        user.deposit(amount);
        std::cout << "the new balance is: " << user.checkBalance() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }
}

void UserUI::withdrew() {
    int amount;
    try {
        std::cout << "enter the amount: " ; std::cin >> amount;
        user.withdrew(amount);
        std::cout << "the new balance is: " << user.checkBalance() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }
}

void UserUI::changePIN() {
    int oldPIN;
    int PIN;

    try {
        std::cout << "enter the old PIN: "; std::cin >> oldPIN;
        std::cout << "enter the new PIN: "; std::cin >> PIN;
        user.changePIN(oldPIN , PIN);
    }catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }
}



