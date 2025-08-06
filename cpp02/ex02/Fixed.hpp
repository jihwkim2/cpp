#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int raw;
    enum { frac_bits = 8 };

public:
    Fixed();
    Fixed(int n);
    Fixed(float f);
    Fixed(const Fixed& other);
    ~Fixed();

    Fixed& operator=(const Fixed& other);

    int  getRawBits() const;
    void setRawBits(int raw);

    float toFloat() const;
    int   toInt() const;

    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    Fixed& operator++();    // pre-increment
    Fixed  operator++(int); // post-increment
    Fixed& operator--();    // pre-decrement
    Fixed  operator--(int); // post-decrement

    static Fixed&       min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed&       max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif 