#include "Harl.hpp"
#include <iostream>


void Harl::debug() {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger!" << std::endl;
}

void Harl::info() {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" << std::endl;
}

void Harl::warning() {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error() {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}


void (Harl::*Harl::getComplainFunction(const std::string& level))() {
    if (level == "DEBUG") return &Harl::debug;
    else if (level == "INFO") return &Harl::info;
    else if (level == "WARNING") return &Harl::warning;
    else if (level == "ERROR") return &Harl::error;
    else return NULL; 
}

void Harl::complain(const std::string& level) {
    void (Harl::*complainFunction)() = getComplainFunction(level);

    
    if (complainFunction != NULL) {
        (this->*complainFunction)(); 
    } else {
        std::cout << "Unknown level: " << level << std::endl;
    }
}
