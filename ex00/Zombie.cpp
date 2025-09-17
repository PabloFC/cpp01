#include "Zombie.hpp"

// Constructor: initializes the zombie's name
Zombie::Zombie(std::string name) : name(name) {}

// Destructor: prints a message when the zombie is destroyed
Zombie::~Zombie()
{
    std::cout << this->name << " has been destroyed." << std::endl;
}

// announce: prints a message announcing the zombie
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
