#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

// Dog 클래스 정의 (Animal 클래스를 상속)
class Dog : public Animal {
public:
    // 생성자: Dog의 타입을 "Dog"로 설정
    Dog() {
        type = "Dog";
    }

    // makeSound() 함수 오버라이드
    void makeSound() const {
        std::cout << "Woof!" << std::endl;
    }
};

#endif