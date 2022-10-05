/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:31:18 by abkasmi           #+#    #+#             */
/*   Updated: 2022/10/05 14:25:38 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie1;
	
	std::cout << "using heap : " << std::endl;
	std::cout << std::endl;
	zombie1 = newZombie("Foo");
	zombie1->announce();
	delete zombie1;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "using stack : " << std::endl;
	std::cout << std::endl;
	randomChump("Baz");
	std::cout << std::endl;
	return (0);
}
