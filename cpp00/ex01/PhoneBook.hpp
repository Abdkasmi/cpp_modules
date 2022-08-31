/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:10:16 by abkasmi           #+#    #+#             */
/*   Updated: 2022/07/28 17:10:16 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	Contact	getContact(int pos) const;
	void	setFirstname(int pos, std::string name);
	void	setLastname(int pos, std::string name);
	void	setNickname(int pos, std::string name);
	void	setPhonenum(int pos, std::string name);
	void	setSecret(int pos, std::string name);

private:

	Contact	contact[8];

};

#endif