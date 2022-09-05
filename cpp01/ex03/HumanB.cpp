/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:11:14 by abkasmi           #+#    #+#             */
/*   Updated: 2022/09/01 19:11:14 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	this->_weapon = nullptr;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
	return ;
}

Weapon*	HumanB::getType(void)
{
	return (this->_weapon);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}