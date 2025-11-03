/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:51:43 by pafuente          #+#    #+#             */
/*   Updated: 2025/11/03 13:31:43 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Prototype for the function that creates a horde of zombies
Zombie *zombieHorde(int N, std::string name);

int main()
{
    int N = 5; // Number of zombies in the horde

    // Create a horde of N zombies with the given name
    Zombie *horde = zombieHorde(N, "HordeMember");

    if (horde)
    {
        // Each zombie in the horde announces itself
        for (int i = 0; i < N; i++)
        {
            horde[i].announce();
        }
        // Free the memory allocated for the horde
        delete[] horde; // important to release memory
    }

    return 0;
}
