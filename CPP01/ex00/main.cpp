#include "Zombie.hpp"

// 함수 원형 선언
Zombie*    newZombie(std::string name);
void       randomChump(std::string name);

int main() {
    // 힙 할당 예시
    Zombie* heapZ = newZombie("Foo");
    heapZ->announce();
    delete heapZ;

    // 스택 할당 예시
    randomChump("Bar");

    return 0;
}
