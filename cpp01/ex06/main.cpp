/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:32:24 by abkasmi           #+#    #+#             */
/*   Updated: 2022/10/05 13:45:23 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	harl;
	std::string		mess[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		level = 5;
	if (ac != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	for (int i = 0; i < 4; i++)
	{
		if (av[1] == mess[i])
			level = i + 1;
	}
	switch(level) {
	
		case 1:
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 2:
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 3:
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case 4:
			harl.complain("ERROR");
			break ;
		default:
			harl.complain("nothing");
			break ;
	}
	return (0);
}