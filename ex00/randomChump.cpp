#include "Zombie.hpp"

// Creates a Zombie object on the stack with the given name
void randomChump(std::string name)
{
    // The zombie announces itself immediately
    Zombie zombie(name);
    zombie.announce();
}
