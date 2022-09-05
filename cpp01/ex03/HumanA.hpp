/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:11:12 by abkasmi           #+#    #+#             */
/*   Updated: 2022/09/01 19:11:12 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA {

private:

	Weapon		_weapon;
	std::string	_name;

public:

	HumanA(std::string name, Weapon weapon);
	~HumanA();
	
	void	attack(void) const;

};