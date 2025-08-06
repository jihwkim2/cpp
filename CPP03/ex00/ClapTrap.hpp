#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
private:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
    // Rule of Three
    ClapTrap();                                      // 기본 생성자
    ClapTrap(const std::string& name);               // 이름 지정 생성자
    ClapTrap(const ClapTrap& other);                 // 복사 생성자
    ClapTrap& operator=(const ClapTrap& other);      // 복사 대입
    ~ClapTrap();                                     // 소멸자

    // 주요 기능
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif