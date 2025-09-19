#include "Zombie.hpp"

// Default constructor: initializes the zombie with the name "Unnamed"
Zombie::Zombie() : name("Unnamed") {}

// Constructor: initializes the zombie with the given name
Zombie::Zombie(std::string name) : name(name) {}

// Destructor: prints a message when the zombie is destroyed
Zombie::~Zombie()
{
    std::cout << this->name << " has been destroyed." << std::endl;
}

// Sets the name of the zombie
void Zombie::setName(std::string name)
{
    this->name = name;
}

// Prints a message announcing the zombie
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
