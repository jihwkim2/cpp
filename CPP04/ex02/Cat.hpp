#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

// Cat 클래스 정의 (Animal 클래스를 상속)
class Cat : public Animal {
public:
    // 생성자: Cat의 타입을 "Cat"으로 설정
    Cat() {
        type = "Cat";
    }

    // makeSound() 함수 오버라이드
    void makeSound() const {
        std::cout << "Meow!" << std::endl;
    }
};

#endif