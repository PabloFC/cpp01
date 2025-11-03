/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:21:22 by pafuente          #+#    #+#             */
/*   Updated: 2025/11/03 12:21:22 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creates a Zombie object on the stack with the given name
void randomChump(std::string name)
{
    // The zombie announces itself immediately
    Zombie zombie(name);
    zombie.announce();
}
