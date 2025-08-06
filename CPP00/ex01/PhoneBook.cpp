#include "PhoneBook.hpp"

void PhoneBook::printSeparator() const {
    std::cout << "+" << std::string(10, '-') << "+"
              << std::string(10, '-') << "+"
              << std::string(10, '-') << "+"
              << std::string(10, '-') << "+\n";
}

void PhoneBook::printHeader() const {
    printSeparator();
    std::cout << "|" << std::setw(10) << "Index"
              << "|" << std::setw(10) << "First Name"
              << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) << "Nickname"
              << "|\n";
    printSeparator();
}

void PhoneBook::printField(const std::string &s) const {
    std::cout << "|" << std::setw(10) << (s.size() > 10 ? s.substr(0, 9) + "." : s);
}

void PhoneBook::addContact() {
    Contact newContact;
    std::string input;

    std::cout << "First name: ";
    std::getline(std::cin, input);
    newContact.setFirstName(input);

    std::cout << "Last name: ";
    std::getline(std::cin, input);
    newContact.setLastName(input);

    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    newContact.setNickname(input);

    std::cout << "Phone number: ";
    std::getline(std::cin, input);
    newContact.setPhoneNumber(input);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, input);
    newContact.setDarkestSecret(input);

    contacts[next] = newContact;
    next = (next + 1) % 8;  // 배열을 순환하면서 가장 오래된 연락처를 덮어씁니다.
    if (count < 8) count++;

    std::cout << "Contact added.\n";
}

void PhoneBook::showContacts() const {
    if (count == 0) {
        std::cout << "No contacts available.\n";
        return;
    }

    printHeader();
    for (int i = 0; i < count; ++i) {
        std::cout << "|" << std::setw(10) << (i + 1);
        printField(contacts[i].getFirstName());
        printField(contacts[i].getLastName());
        printField(contacts[i].getNickname());
        std::cout << "|\n";
    }
    printSeparator();
}

void PhoneBook::viewContact() const {
    int index;
    std::string s;
    std::cout << "Enter index: ";
    std::getline(std::cin, s);
    index = std::atoi(s.c_str());

    if (index < 1 || index > count) {
        std::cout << "Invalid index.\n";
        return;
    }

    const Contact &c = contacts[index - 1];
    std::cout << "First Name: " << c.getFirstName() << "\n";
    std::cout << "Last Name: " << c.getLastName() << "\n";
    std::cout << "Nickname: " << c.getNickname() << "\n";
    std::cout << "Phone Number: " << c.getPhoneNumber() << "\n";
    std::cout << "Darkest Secret: " << c.getDarkestSecret() << "\n";
}
