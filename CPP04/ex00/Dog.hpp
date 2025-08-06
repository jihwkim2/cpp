#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog() {
        type = "Dog";
    }

    void makeSound() const{
        std::cout << "Woof!" << std::endl;
    }
};

# endif
