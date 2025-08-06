#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main() {
    PhoneBook pb;
    std::string cmd;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, cmd);

        if (cmd == "EXIT") break;
        else if (cmd == "ADD") pb.addContact();
        else if (cmd == "SEARCH") {
            pb.showContacts();
            pb.viewContact();
        } else {
            std::cout << "Invalid command.\n";
        }
    }

    return 0;
}
