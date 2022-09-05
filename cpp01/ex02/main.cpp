/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:05:40 by abkasmi           #+#    #+#             */
/*   Updated: 2022/09/01 19:08:51 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr_str = &str;
	std::string	&ref_str = str;

	std::cout << "Memory address" << std::endl << std::endl;
	std::cout << "str : " << &str << std::endl;
	std::cout << "ptr_str : " << &*ptr_str << std::endl;
	std::cout << "ref_str : " << &ref_str << std::endl << std::endl;
	std::cout << "Value" << std::endl << std::endl;
	std::cout << "str : " << str << std::endl;
	std::cout << "ptr_str : " << *ptr_str << std::endl;
	std::cout << "ref_str : " << ref_str << std::endl;
	return (0);
}