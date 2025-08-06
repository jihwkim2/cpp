#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class PhoneBook {
private:
    Contact contacts[8]; 
    int count;            
    int next;             

public:
    PhoneBook() : count(0), next(0) {} 

    void addContact();    
    void showContacts() const; 
    void viewContact() const; 

private:
    void printSeparator() const;
    void printHeader() const;
    void printField(const std::string &s) const;
};

#endif
