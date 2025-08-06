#include "ScavTrap.hpp"


int main() {
    ScavTrap s("Guardian");
    s.attack("Intruder");
    s.takeDamage(30);
    s.beRepaired(10);
    s.guardGate();
    return 0;
}

