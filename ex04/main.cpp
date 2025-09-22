/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <pafuente@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:49:03 by marvin            #+#    #+#             */
/*   Updated: 2025/09/22 21:49:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(std::string line, const std::string &s1, const std::string &s2)
{
    if (s1.empty())
        return line;

    size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos)
    {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }
    return line;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream infile(filename.c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error: could not open input file " << filename << std::endl;
        return 1;
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error: could not create output file " << filename << ".replace" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(infile, line))
    {
        outfile << replaceAll(line, s1, s2);
        if (!infile.eof())
            outfile << "\n";
    }

    infile.close();
    outfile.close();

    return 0;
}
