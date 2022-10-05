/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:09:01 by abkasmi           #+#    #+#             */
/*   Updated: 2022/10/05 15:33:49 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


std::string	find_and_replace(std::string line, std::string str, std::string to_replace)
{
	size_t	pos = 0;
	pos = line.find(str);
	while (pos != std::string::npos)
	{
		line.erase(pos, str.size());
		line.insert(pos, to_replace);
		pos = line.find(str);	
	}
	return (line);
}

int main(int ac, char *av[])
{
	std::string	line;
	if (ac != 4)
	{
		std::cout << "Please enter correct parameters!" << std::endl;
		return (1);
	}
	std::ifstream	ifs;
	ifs.open(av[1]);
	if(!ifs.is_open())
	{
		std::cout << "Filename error!" << std::endl;
		return (1);
	}
	std::ofstream	ofs;
	ofs.open((std::string)av[1] + ".replace");
	while (getline(ifs, line))
		ofs << find_and_replace(line, av[2], av[3]) << std::endl;
	ifs.close();
	ofs.close();
	return (0);
}
