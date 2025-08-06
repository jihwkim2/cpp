#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
    Zombie();                            
    Zombie(const std::string& name);     
    ~Zombie();                           

    void announce() const;               
    void setName(const std::string& name); 

private:
    std::string name_;                   
};

#endif
