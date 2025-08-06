#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // 동물 배열 생성: 절반은 Dog, 절반은 Cat
    Animal* animals[6];

    for (int i = 0; i < 3; ++i) {
        animals[i] = new Dog();
    }

    for (int i = 3; i < 6; ++i) {
        animals[i] = new Cat();
    }

    // 동물들의 타입과 소리 출력
    for (int i = 0; i < 6; ++i) {
        std::cout << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }

    // 동물 객체 메모리 해제
    for (int i = 0; i < 6; ++i) {
        delete animals[i];
    }

    return 0;
}
