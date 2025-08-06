#include "ClapTrap.hpp"

int main() {
    ClapTrap a("Alpha");
    ClapTrap b = a;
    a.attack("Target");
    b.takeDamage(5);
    b.beRepaired(3);
    ClapTrap c;
    c = b;
    c.attack("Dummy");
    return 0;
}
