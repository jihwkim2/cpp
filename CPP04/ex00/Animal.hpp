#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;

public:
    Animal() : type("Unknown") {}

    // 순수 가상 함수
    virtual void makeSound() const = 0;
   
    virtual std::string getType() const {
        return type;
    }

    virtual ~Animal() {} // 가상 소멸자
};

#endif