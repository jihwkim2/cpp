#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
: ClapTrap("Unnamed_Scav") {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap <" << /* ClapTrap::_name */ "> constructed\n";
}

ScavTrap::ScavTrap(const std::string& name)
: ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap <" << name << "> constructed\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap <copied>\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    ClapTrap::operator=(other);
    std::cout << "ScavTrap <assigned>\n";
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap <destructed>\n";
}

void ScavTrap::attack(const std::string& target) {
    // ScavTrap만의 메시지
    ClapTrap::attack(target);
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode\n";
}