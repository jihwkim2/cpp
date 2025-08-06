#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    // 생성자
    Dog() {
        type = "Dog";
    }

    // makeSound() 함수 오버라이드
    void makeSound() const {
        std::cout << "Woof!" << std::endl;
    }
};

#endif