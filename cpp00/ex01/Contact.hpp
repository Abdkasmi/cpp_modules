/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:10:10 by abkasmi           #+#    #+#             */
/*   Updated: 2022/07/28 17:10:10 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {

public:

	Contact(void);
	~Contact(void);

	void	setFirstname(std::string name);
	void	setLastname(std::string name);
	void	setNickname(std::string name);
	void	setPhonenum(std::string num);
	void	setSecret(std::string secret);

	std::string	getFirstname(void) const;
	std::string	getLastname(void) const;
	std::string	getNickname(void) const;
	std::string	getPhonenum(void) const;
	std::string	getSecret(void) const;

private:

	std::string _f_name;
	std::string _l_name;
	std::string _n_name;
	std::string _phone_num;
	std::string _secret;
};

#endif