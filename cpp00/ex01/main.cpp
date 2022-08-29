/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:06:41 by abkasmi           #+#    #+#             */
/*   Updated: 2022/07/28 17:06:41 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

static void	instructions(void)
{
	std::cout << "Type ADD to add a new contact:" << std::endl;
	std::cout << "Type SEARCH to search a speacic contact:" << std::endl;
	std::cout << "Type EXIT to exit the phonebook:" << std::endl;
	
	return ;
}

int main(void)
{
	std::string	action;
	PhoneBook	phonebook;
	int			i = 0;
	int			nb_contacts = 0;

	std::cout << "Hey welcome in my awesome phonebook !" << std::endl;
	instructions();
	std::cin >> action;
	while (action.compare("EXIT") != 0)
	{
		if (action.compare("ADD") != 0 && action.compare("SEARCH") != 0 && action.compare("EXIT") != 0)
		{
			instructions();
			std::cin >> action;
		}
		if (action.compare("ADD") == 0)
		{
			if (nb_contacts == 8)
				nb_contacts = 0;
			std::cout << "First name : ";
			std::cin >> phonebook.contact[nb_contacts].f_name;
			std::cout << "Last name : ";
			std::cin >> phonebook.contact[nb_contacts].l_name;
			std::cout << "Nickname : ";
			std::cin >> phonebook.contact[nb_contacts].n_name;
			std::cout << "phone number : ";
			std::cin >> phonebook.contact[nb_contacts].phone_num;
			std::cout << "Darkest secret : ";
			std::cin >> phonebook.contact[nb_contacts].secret;
			std::cout << phonebook.contact[nb_contacts].n_name << " has been added to your contact list!" << std::endl; 
			nb_contacts++;
			instructions();
			std::cin >> action;
		}
		else if (action.compare("SEARCH") == 0)
		{
			if (nb_contacts == 0)
				std::cout << "There is no contact to list. Please add at least one contact before searching." << std::endl;
			else
			{
				while (i < nb_contacts)
				{
					std::cout << "         " << i + 1 << " | " << phonebook.contact[i].f_name <<  " | " << phonebook.contact[i].l_name <<\
						 " | " << phonebook.contact[i].n_name <<  " | " << phonebook.contact[i].phone_num <<  " | " << phonebook.contact[i].secret << std::endl;
					i++;
				}
			}
			instructions();
			std::cin >> action;
		}
	}
	return (0);
}