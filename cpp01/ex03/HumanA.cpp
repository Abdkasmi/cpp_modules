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
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon), _name(name)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

Weapon	&HumanA::getWeapon(void)
{
	return (this->_weapon);
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attack with their " << this->getWeapon().getType() << std::endl;
	return ;
}
