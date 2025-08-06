#include "Zombie.hpp"
#include <iostream>


Zombie* zombieHorde(int N, const std::string& name) {
    if (N <= 0)
        return NULL;

    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);
    }
    return horde;
}


void announceHorde(Zombie* horde, int N) {
    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }
}

void destroyHorde(Zombie* horde) {
    delete[] horde;
}
