#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string& name) : name(name) {
    std::cout << "Constructor: " << this->name << " 생성\n";
}

Zombie::~Zombie() {
    std::cout << "Destructor: " << this->name << " 제거\n";
}

void Zombie::announce(void) const {
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
