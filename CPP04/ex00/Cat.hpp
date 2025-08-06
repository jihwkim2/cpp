#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat() {
        type = "Cat";
    }

    void makeSound() const{
        std::cout << "Meow!" << std::endl;
    }
};

#endif
