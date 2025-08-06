#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;  // 동물의 종류를 나타내는 변수

public:
    // 생성자: 기본적으로 타입을 "Unknown"으로 설정
    Animal() : type("Unknown") {}

    // 순수 가상 함수 makeSound() - 추상 클래스로 만들기 위해
    virtual void makeSound() const = 0;

    // 타입을 반환하는 함수
    virtual std::string getType() const {
        return type;
    }

    // 소멸자
    virtual ~Animal() {}
};

#endif