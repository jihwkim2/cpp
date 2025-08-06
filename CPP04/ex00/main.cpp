#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // Animal 타입의 포인터로 Dog와 Cat 객체 생성
    const Animal* j = new Dog();  // Dog 객체
    const Animal* i = new Cat();  // Cat 객체

    // Dog와 Cat 객체의 타입 출력
    std::cout << j->getType() << std::endl;  // Dog
    std::cout << i->getType() << std::endl;  // Cat

    // Dog와 Cat 객체의 소리 출력
    i->makeSound();  // Meow!
    j->makeSound();  // Bark!

    // 생성된 객체 메모리 해제
    delete j;
    delete i;

    return 0;
}
