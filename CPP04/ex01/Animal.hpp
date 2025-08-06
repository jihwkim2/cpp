#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"  // Brain 클래스 포함

class Animal {
protected:
    std::string type;
    Brain* brain;  // Brain 포인터 추가

public:
    // 생성자
    Animal() : type("Unknown"), brain(new Brain()) {}

    // 순수 가상 함수
    virtual void makeSound() const = 0;

    // 타입 반환 함수
    virtual std::string getType() const { return type; }

    // 복사 생성자
    Animal(const Animal& other) : type(other.type), brain(new Brain(*other.brain)) {}

    // 대입 연산자
    Animal& operator=(const Animal& other) {
        if (this != &other) {
            delete brain;  // 기존 brain 객체 삭제
            type = other.type;
            brain = new Brain(*other.brain);  // 깊은 복사
        }
        return *this;
    }

    // 소멸자
    virtual ~Animal() {
        delete brain;  // 메모리 해제
    }
};

#endif

