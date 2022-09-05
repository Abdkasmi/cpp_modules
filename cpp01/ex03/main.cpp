/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:11:19 by abkasmi           #+#    #+#             */
/*   Updated: 2022/09/01 19:11:19 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon club = Weapon("9 mm");
		
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("ak-47");
		bob.attack();
	}
	{
		Weapon club = Weapon("desert eagle");
		
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("m4a1-s");
		jim.attack();
	}

	return 0;
}
