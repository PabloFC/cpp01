/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:52:08 by pafuente          #+#    #+#             */
/*   Updated: 2025/11/03 13:31:21 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

// Declaration of the Zombie class
// Represents a zombie with a name and methods to set its name and announce itself
class Zombie
{
private:
    std::string name; // Stores the name of the zombie

public:
    Zombie();                 // Default constructor
    Zombie(std::string name); // Constructor that initializes the zombie's name
    ~Zombie();                // Destructor, called when the zombie object is destroyed

    void setName(std::string name); // Sets the name of the zombie
    void announce(void);            // Prints a message announcing the zombie
};

#endif
