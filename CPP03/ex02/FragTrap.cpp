#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
: ClapTrap("Unnamed_Frag") {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap <" << /* name */ "> constructed\n";
}

FragTrap::FragTrap(const std::string& name)
: ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap <" << name << "> constructed\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap <copied>\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    ClapTrap::operator=(other);
    std::cout << "FragTrap <assigned>\n";
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap <destructed>\n";
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap requests: High five, guys! ✋\n";
}
