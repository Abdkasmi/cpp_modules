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
	std::string name;
	std::string	contact_num;
	PhoneBook	phonebook;
	int			i;
	int			nb_contacts = 0;
	int			contact;

	std::cout << "Hey welcome in my awesome phonebook !" << std::endl;
	instructions();
	std::getline(std::cin, action);
	while (action.compare("EXIT") != 0)
	{
		if (action.compare("ADD") != 0 && action.compare("SEARCH") != 0 && action.compare("EXIT") != 0)
		{
			instructions();
			std::getline(std::cin, action);
		}
		if (action.compare("ADD") == 0)
		{
			std::cout << "First name : ";
			std::getline(std::cin, name);
			if (name.compare("") == 0)
				goto jump;
			phonebook.setFirstname(nb_contacts % 8, name);
			std::cout << "Last name : ";
			std::getline(std::cin, name);
			if (name.compare("") == 0)
				goto jump;
			phonebook.setLastname(nb_contacts % 8, name);
			std::cout << "Nickname : ";
			std::getline(std::cin, name);
			if (name.compare("") == 0)
				goto jump;
			phonebook.setNickname(nb_contacts % 8, name);
			std::cout << "phone number : ";
			std::getline(std::cin, name);
			if (name.compare("") == 0)
				goto jump;
			phonebook.setPhonenum(nb_contacts % 8, name);
			std::cout << "Darkest secret : ";
			std::getline(std::cin, name);
			if (name.compare("") == 0)
				goto jump;
			phonebook.setSecret(nb_contacts % 8, name);
			nb_contacts++;
		}
		jump:
		if (action.compare("SEARCH") == 0)
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
					std::cout << std::setw(10) << truncate(phonebook.getContact(i).getFirstname()) << " | ";
					std::cout << std::setw(10) << truncate(phonebook.getContact(i).getLastname()) << " | ";
					std::cout << std::setw(10) << truncate(phonebook.getContact(i).getNickname()) << std::endl;
					i++;
				}
				std::cout << "Which contact do you wnat to look at :";
				std::getline(std::cin, contact_num);
				while (1)
				{
					if (check_str(contact_num))
					{
						std::cout << "Please enter a valid information !" << std::endl;
						std::cout << "Which contact do you wnat to look at : ";
						std::getline(std::cin, contact_num);
					}
					else
					{
						if (contact)	
							contact = std::stoi(contact_num, 0, 10);
						if (contact > 0 && contact <= nb_contacts && contact < 9)
						{
							std::cout << "	Index : " << contact << std::endl;
							std::cout << "	First name : " << phonebook.getContact(contact - 1).getFirstname() << std::endl;
							std::cout << "	Last name : " << phonebook.getContact(contact - 1).getLastname() << std::endl;
							std::cout << "	Nickname : " << phonebook.getContact(contact - 1).getNickname() <<  std::endl;
							std::cout << "	Phone number : " << phonebook.getContact(contact - 1).getPhonenum() <<  std::endl;
							std::cout << "	Darkest Secret : " << phonebook.getContact(contact - 1).getSecret() << std::endl;
							break ;
						}
						else
						{
							std::cout << "Please enter a valid information !" << std::endl;
							std::cout << "Which contact do you wnat to look at : ";
							std::getline(std::cin, contact_num);
						}
					}
				}
			}
		}
		instructions();
		std::getline(std::cin, action);
	}
	return (0);
}