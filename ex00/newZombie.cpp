#include "Zombie.hpp"

// Creates a new Zombie object on the heap with the given name
Zombie *newZombie(std::string name)
{
    // Returns a pointer to the newly created Zombie
    return new Zombie(name);
}
