#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
    : name_("Unnamed")
{}

Zombie::Zombie(const std::string& name)
    : name_(name)
{}

Zombie::~Zombie() {
    std::cout << name_ << " 소멸\n";
}

void Zombie::announce() const {
    std::cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(const std::string& name) {
     name_ = name; //객체의 멤버변수인 NAME_에 값을 할당하는 코드. 객체의 NAME_이라는 멤버변수에 멥버값을 저장
}
