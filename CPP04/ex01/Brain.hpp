#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <sstream>  // ostringstream 사용

class Brain {
public:
    std::string ideas[100];

    // 생성자
    Brain() {
        for (int i = 0; i < 100; ++i) {
            std::ostringstream oss;
            oss << "Idea " << i;
            ideas[i] = oss.str();
        }
    }

    // 복사 생성자
    Brain(const Brain& other) {
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i];
        }
    }

    // 소멸자
    ~Brain() {}
};

#endif