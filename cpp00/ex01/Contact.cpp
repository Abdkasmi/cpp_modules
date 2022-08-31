/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:10:08 by abkasmi           #+#    #+#             */
/*   Updated: 2022/07/28 17:10:08 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::setFirstname(std::string name)
{
	this->_f_name = name;
}

void	Contact::setLastname(std::string name)
{
	this->_l_name = name;
}

void	Contact::setNickname(std::string name)
{
	this->_n_name = name;
}

void	Contact::setPhonenum(std::string num)
{
	this->_phone_num = num;
}

void	Contact::setSecret(std::string secret)
{
	this->_secret = secret;
}

std::string	Contact::getFirstname(void) const
{
	return (this->_f_name);
}

std::string	Contact::getLastname(void) const
{
	return (this->_l_name);
}

std::string	Contact::getNickname(void) const
{
	return (this->_n_name);
}

std::string	Contact::getPhonenum(void) const
{
	return (this->_phone_num);
}

std::string	Contact::getSecret(void) const
{
	return (this->_secret);
}