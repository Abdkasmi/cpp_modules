/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:02:07 by abkasmi           #+#    #+#             */
/*   Updated: 2022/09/01 15:03:55 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	Zombie{

public:
	
	Zombie();
	~Zombie(void);

	void		announce(void) const;
	void		setName(std::string name);
	
private:
	std::string	_name;

};

Zombie	*zombieHorde(int n, std::string name);
