#include "Zombie.hpp"
#include <iostream>

int main() {
    // 함수 선언을 main 내부에 위치
    Zombie* zombieHorde(int N, const std::string& name);
    void announceHorde(Zombie* horde, int N);
    void destroyHorde(Zombie* horde);

    int N = 5;                        // 생성할 좀비 수
    std::string baseName = "좀비";  // 좀비 기본 이름

    // 좀비 무리 생성
    Zombie* horde = zombieHorde(N, baseName);
    if (horde == NULL) {
        std::cerr << "좀비 생성 실패\n";
        return 1;
    }

    // 좀비들이 모두 외치기
    announceHorde(horde, N);

    // 메모리 해제
    destroyHorde(horde);
    return 0;
}
