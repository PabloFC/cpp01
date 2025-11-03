/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:20:55 by pafuente          #+#    #+#             */
/*   Updated: 2025/11/03 12:20:55 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
