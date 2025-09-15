#include "Zombie.hpp"

// Prototipos de funciones libres
Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    // Zombie en el heap
    Zombie *heapZombie = newZombie("Heapster");
    heapZombie->announce();
    delete heapZombie;

    // Zombie en el stack
    randomChump("Stacky");

    return 0;
}
