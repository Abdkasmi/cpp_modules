/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:10:14 by abkasmi           #+#    #+#             */
/*   Updated: 2022/07/28 17:10:14 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

Contact PhoneBook::getContact(int pos) const
{
	return (this->contact[pos]);
}

void	PhoneBook::setFirstname(int pos, std::string name)
{
	this->contact[pos].setFirstname(name);
	return ;
}

void	PhoneBook::setLastname(int pos, std::string name)
{
	this->contact[pos].setLastname(name);
	return ;
}

void	PhoneBook::setNickname(int pos, std::string name)
{
	this->contact[pos].setNickname(name);
	return ;
}

void	PhoneBook::setPhonenum(int pos, std::string name)
{
	this->contact[pos].setPhonenum(name);
	return ;
}

void	PhoneBook::setSecret(int pos, std::string name)
{
	this->contact[pos].setSecret(name);
	return ;
}