#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    Fixed();                        // 기본 생성자
    Fixed(const Fixed& other);     // 복사 생성자
    Fixed& operator=(const Fixed& other); // 대입 연산자
    ~Fixed();                      // 소멸자

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
