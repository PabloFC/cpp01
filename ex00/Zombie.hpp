#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    // The private member name stores the zombie's name.
private:
    std::string name;

    // The constructor Zombie(std::string name) initializes the zombie's name.
    //  The destructor ~Zombie() is called when the zombie object is destroyed.
public:
    Zombie(std::string name);
    ~Zombie();

    void announce(void);
};

#endif
