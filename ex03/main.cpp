/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <pafuente@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:27:34 by marvin            #+#    #+#             */
/*   Updated: 2025/09/21 20:27:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main()
{
    Weapon club("club");
    HumanA jim("Jim", club);
    jim.attack();
    club.setType("sword");
    jim.attack();

    Weapon axe("axe");
    HumanB tom("Tom");
    tom.attack();
    tom.setWeapon(axe);
    tom.attack();
    axe.setType("hammer");
    tom.attack();

    return 0;
}
