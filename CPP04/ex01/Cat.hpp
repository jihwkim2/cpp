#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    // 생성자
    Cat() {
        type = "Cat";
    }

    // makeSound() 함수 오버라이드
    void makeSound() const {
        std::cout << "Meow!" << std::endl;
    }
};

#endif
