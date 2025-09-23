/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <pafuente@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 21:36:29 by marvin            #+#    #+#             */
/*   Updated: 2025/09/23 21:36:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug(void)
{
    std::cout << "[ DEBUG ] I love having extra bacon for my burger!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ] Adding extra bacon costs more money." << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    struct LevelFunc
    {
        std::string level;
        void (Harl::*func)(void);
    };

    LevelFunc actions[] = {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error}};

    for (int i = 0; i < 4; i++)
    {
        if (level == actions[i].level)
        {
            (this->*actions[i].func)();
            return;
        }
    }
}
