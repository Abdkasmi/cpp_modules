/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:02:13 by abkasmi           #+#    #+#             */
/*   Updated: 2022/09/01 15:04:10 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde = zombieHorde(5, "FooBazz");
    for (int i = 0; i < 5; i++)
        horde[i].announce();
    std::cout << std::endl;
    delete [] horde;
    return (0);
}
