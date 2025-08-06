#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: _name("Unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap <" << _name << "> constructed\n";
}

ClapTrap::ClapTrap(const std::string& name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap <" << _name << "> constructed\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
: _name(other._name),
  _hitPoints(other._hitPoints),
  _energyPoints(other._energyPoints),
  _attackDamage(other._attackDamage)
{
    std::cout << "ClapTrap <" << _name << "> copied\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap <" << _name << "> assigned\n";
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap <" << _name << "> destructed\n";
}

void ClapTrap::attack(const std::string& target) {
    if (_hitPoints == 0 || _energyPoints == 0) {
        std::cout << "ClapTrap <" << _name << "> can't attack\n";
        return;
    }
    --_energyPoints;
    std::cout << "ClapTrap <" << _name << "> attacks <" << target
              << ">, causing <" << _attackDamage << "> damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints <= amount) _hitPoints = 0;
    else _hitPoints -= amount;
    std::cout << "ClapTrap <" << _name << "> takes <" << amount
              << "> damage, HP=" << _hitPoints << "\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints == 0 || _energyPoints == 0) {
        std::cout << "ClapTrap <" << _name << "> can't repair\n";
        return;
    }
    --_energyPoints;
    _hitPoints += amount;
    std::cout << "ClapTrap <" << _name << "> repairs <" << amount
              << "> points, HP=" << _hitPoints << "\n";
}