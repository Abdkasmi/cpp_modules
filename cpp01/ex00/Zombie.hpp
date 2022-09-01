/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:31:29 by abkasmi           #+#    #+#             */
/*   Updated: 2022/09/01 14:59:13 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class	Zombie {

public:
	
	Zombie(std::string name);
	~Zombie();
	
	void		announce(void) const;
	std::string	getName(void);

private:
	
	std::string	_name;

};

Zombie		*newZombie(std::string name);
void		randomChump(std::string name);