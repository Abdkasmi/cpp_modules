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
#include <iomanip>
#include <cstring>
#include <cctype>
#include "Contact.hpp"
#include "PhoneBook.hpp"

static void	instructions(void)
{
	std::cout << "Type ADD to add a new contact:" << std::endl;
	std::cout << "Type SEARCH to search a speacic contact:" << std::endl;
	std::cout << "Type EXIT to exit the phonebook:" << std::endl;
	
	return ;
}

static std::string	truncate(std::string str)
{

	if (str.size() > 9)
		return (str.substr(0, 9) + ".");
	return (str);
}

static int	check_str(std::string str)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

static void	set_tab(void)
{
	std::cout << std::setw(10) << "Index" << "| ";
	std::cout << std::setw(10) << "First name" << " | ";
	std::cout << std::setw(10) << "Last name" << " | ";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	std::cout << "|---------+------------+------------+--------------|" << std::endl;
}

int main(void)
{
	std::string	action;
	PhoneBook	phonebook;
	int			i;
	int			nb_contacts = 0;
	std::string	contact_num;
	int			contact;

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
			std::cout << "First name : ";
			std::cin >> phonebook.contact[nb_contacts % 8].f_name;
			std::cout << "Last name : ";
			std::cin >> phonebook.contact[nb_contacts % 8].l_name;
			std::cout << "Nickname : ";
			std::cin >> phonebook.contact[nb_contacts % 8].n_name;
			std::cout << "phone number : ";
			std::cin >> phonebook.contact[nb_contacts % 8].phone_num;
			std::cout << "Darkest secret : ";
			std::cin >> phonebook.contact[nb_contacts % 8].secret;
			std::cout << phonebook.contact[nb_contacts % 8].n_name << " has been added to your contact list!" << std::endl; 
			nb_contacts++;
		}
		else if (action.compare("SEARCH") == 0)
		{
			if (nb_contacts == 0)
				std::cout << "There is no contact to list. Please add at least one contact before searching." << std::endl;
			else
			{
				set_tab();
				i = 0;
				while (i < nb_contacts && i < 8)
				{
					std::cout << std::setw(9) << i + 1 << " | ";
					std::cout << std::setw(10) << truncate(phonebook.contact[i].f_name) << " | ";
					std::cout << std::setw(10) << truncate(phonebook.contact[i].l_name) << " | ";
					std::cout << std::setw(10) << truncate(phonebook.contact[i].n_name) << std::endl;
					i++;
				}
				std::cout << "Which contact do you wnat to look at :";
				std::cin >> contact_num;
				while (1)
				{
					if (check_str(contact_num))
					{
						std::cout << "Please enter a valid information !" << std::endl;
						std::cout << "Which contact do you wnat to look at : ";
						std::cin >> contact_num;
					}
					else
					{
						contact = std::stoi(contact_num, 0, 10);
						if (contact > 0 && contact <= nb_contacts && contact < 9)
						{
							std::cout << "	Index : " << contact << std::endl;
							std::cout << "	First name : " << truncate(phonebook.contact[contact - 1].f_name) << std::endl;
							std::cout << "	Last name : " << truncate(phonebook.contact[contact - 1].l_name) << std::endl;
							std::cout << "	Nickname : " << truncate(phonebook.contact[contact - 1].n_name) <<  std::endl;
							std::cout << "	Phone number : " << truncate(phonebook.contact[contact - 1].phone_num) <<  std::endl;
							std::cout << "	Darkest Secret : " << truncate(phonebook.contact[contact - 1].secret) << std::endl;
							break ;
						}
						else
						{
							std::cout << "Please enter a valid information !" << std::endl;
							std::cout << "Which contact do you wnat to look at : ";
							std::cin >> contact_num;
						}
					}
				}
			}
		}
		instructions();
		std::cin >> action;
	}
	return (0);
}