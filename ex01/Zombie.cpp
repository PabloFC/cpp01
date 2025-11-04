/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:52:00 by pafuente          #+#    #+#             */
/*   Updated: 2025/11/04 10:33:53 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
