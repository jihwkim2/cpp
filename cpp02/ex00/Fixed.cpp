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

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    _value = other._value;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        _value = other._value;
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}
