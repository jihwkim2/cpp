#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // Animal 객체는 생성할 수 없다.
    // Animal* animal = new Animal(); // 오류 발생

    const Animal* dog = new Dog();  // Dog 객체 생성
    const Animal* cat = new Cat();  // Cat 객체 생성

    // Dog 객체의 타입과 소리 출력
    std::cout << dog->getType() << std::endl;  // "Dog" 출력
    dog->makeSound();  // "Woof!" 출력

    // Cat 객체의 타입과 소리 출력
    std::cout << cat->getType() << std::endl;  // "Cat" 출력
    cat->makeSound();  // "Meow!" 출력

    // 메모리 해제
    delete dog;
    delete cat;

    return 0;
}