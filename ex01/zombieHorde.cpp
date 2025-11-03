/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:52:17 by pafuente          #+#    #+#             */
/*   Updated: 2025/11/03 13:31:26 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creates an array of N zombies on the heap, all with the given name
Zombie *zombieHorde(int N, std::string name)
{
    // If N is not positive, return NULL
    if (N <= 0)
        return NULL;

    // Allocate an array of N zombies on the heap
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        // Set the name for each zombie in the horde
        horde[i].setName(name);
    }
    // Return a pointer to the first zombie in the horde
    return horde;
}
