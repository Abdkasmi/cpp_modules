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

HumanA::HumanB()
{
	return ;
}

HumanA::~HumanB()
{
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << "attack with their " << this->_weapon << std::endl;
	return ;
}