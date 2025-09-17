#include "Zombie.hpp"

// Function prototypes for creating and announcing zombies
Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    // Creates a zombie on the heap
    Zombie *heapZombie = newZombie("Heapster");
    heapZombie->announce(); // Announces the heap zombie
    delete heapZombie;      // Destroys the heap zombie and frees memory

    // Creates a zombie on the stack
    randomChump("Stacky"); // Announces the stack zombie

    return 0;
}
