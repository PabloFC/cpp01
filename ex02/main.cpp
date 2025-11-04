/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:48:49 by pafuente          #+#    #+#             */
/*   Updated: 2025/11/04 10:48:49 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    // Create a string variable initialized with the required text
    std::string str = "HI THIS IS BRAIN";
    // Create a pointer to the string variable
    std::string *stringPTR = &str;
    // Create a reference to the string variable
    std::string &stringREF = str;

    // Print the memory addresses
    std::cout << "Memory address of str: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    // Print the values
    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value referenced by stringREF: " << stringREF << std::endl;

    return 0;
}