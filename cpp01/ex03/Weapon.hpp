/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:11:26 by abkasmi           #+#    #+#             */
/*   Updated: 2022/09/01 19:11:26 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon{

public:

	Weapon(std::string type);
	Weapon();
	~Weapon();

	std::string	getType(void) const;
	void		setType(std::string type);

private:

	std::string	_type;

};

