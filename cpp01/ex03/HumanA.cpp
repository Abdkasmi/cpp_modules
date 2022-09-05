/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:11:09 by abkasmi           #+#    #+#             */
/*   Updated: 2022/09/01 19:11:09 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->_name = name;
	this->_weapon = weapon;
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << "attack with their " << this->_weapon << std::endl;
	return ;
}
