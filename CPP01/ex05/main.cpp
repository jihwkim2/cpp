#include "Harl.hpp"

int main() {
    Harl h;

    // 각 레벨에 대해 complain 함수 호출
    h.complain("DEBUG");
    h.complain("INFO");
    h.complain("WARNING");
    h.complain("ERROR");
    h.complain("UNKNOWN");  // 알 수 없는 레벨을 입력했을 때

    return 0;
}
