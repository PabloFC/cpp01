/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:21:13 by pafuente          #+#    #+#             */
/*   Updated: 2025/11/03 12:21:13 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

// Creates a new Zombie object on the heap with the given name
Zombie *newZombie(std::string name)
{
    // Returns a pointer to the newly created Zombie
    return new Zombie(name);
}
