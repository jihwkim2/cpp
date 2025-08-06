#include "Fixed.hpp"

Fixed::Fixed() : raw(0) {}
Fixed::Fixed(int n) : raw(n << frac_bits) {}
Fixed::Fixed(float f)
    : raw(static_cast<int>(std::floor(f * (1 << frac_bits) + (f >= 0 ? 0.5f : -0.5f)))) {}
Fixed::Fixed(const Fixed& other) : raw(other.raw) {}
Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other)
        raw = other.raw;
    return *this;
}

int  Fixed::getRawBits() const        { return raw; }
void Fixed::setRawBits(int raw)       { this->raw = raw; }

float Fixed::toFloat() const          { return raw / static_cast<float>(1 << frac_bits); }
int   Fixed::toInt() const            { return raw >> frac_bits; }

bool Fixed::operator>(const Fixed& o) const { return raw >  o.raw; }
bool Fixed::operator<(const Fixed& o) const { return raw <  o.raw; }
bool Fixed::operator>=(const Fixed& o) const { return raw >= o.raw; }
bool Fixed::operator<=(const Fixed& o) const { return raw <= o.raw; }
bool Fixed::operator==(const Fixed& o) const { return raw == o.raw; }
bool Fixed::operator!=(const Fixed& o) const { return raw != o.raw; }

Fixed Fixed::operator+(const Fixed& o) const {
    Fixed tmp(*this);
    tmp.raw += o.raw;
    return tmp;
}
Fixed Fixed::operator-(const Fixed& o) const {
    Fixed tmp(*this);
    tmp.raw -= o.raw;
    return tmp;
}
Fixed Fixed::operator*(const Fixed& o) const {
    Fixed tmp;
    long prod = static_cast<long>(raw) * static_cast<long>(o.raw);
    tmp.raw = static_cast<int>(prod >> frac_bits);
    return tmp;
}
Fixed Fixed::operator/(const Fixed& o) const {
    Fixed tmp;
    long numer = (static_cast<long>(raw) << frac_bits);
    tmp.raw = static_cast<int>(numer / o.raw);
    return tmp;
}

Fixed& Fixed::operator++()    { ++raw; return *this; }
Fixed  Fixed::operator++(int) { Fixed old(*this); ++raw; return old; }
Fixed& Fixed::operator--()    { --raw; return *this; }
Fixed  Fixed::operator--(int) { Fixed old(*this); --raw; return old; }

Fixed& Fixed::min(Fixed& a, Fixed& b)               { return (a < b ? a : b); }
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) { return (a < b ? a : b); }
Fixed& Fixed::max(Fixed& a, Fixed& b)               { return (a > b ? a : b); }
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) { return (a > b ? a : b); }

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
    os << f.toFloat();
    return os;
}