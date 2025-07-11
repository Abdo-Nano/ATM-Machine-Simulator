#include <iostream>
#include <vector>
#include "../include/User.h"
#include "../include/Admin.h"
#include "../include/ATM.h"


int main() {
    std::cout << "Banking System Started\n";

    // Create users directly (no smart pointers)
    User alice("Alice", "alice@example.com", 123 , 100);
    User bob("Bob", "bob@example.com", 123 , 40);

    std::vector<User> users {alice , bob};

    Admin abdo("abdo" , "abdo@gmail.com" , 123 ,users);
    Admin mohamed("mohamed" , "abdo@gmail.com" , 123 ,users);

    std::vector<Admin> admins{abdo , mohamed};

    ATM atm(users , admins);
    atm.showModelSelection();

    return 0;
}
