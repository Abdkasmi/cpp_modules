/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:09:01 by abkasmi           #+#    #+#             */
/*   Updated: 2022/09/07 15:43:04 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Please enter correct parameters!" << std::endl;
		return (1);
	}
	std::ifstream	ifs(av[1]);
	if(!ifs.is_open())
		std::cout << "Filename error!" << std::endl;
	std::ofstream	ofs((std::string)av[1] + ".replace");	
}