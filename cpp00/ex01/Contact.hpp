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

	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string phone_num;
	std::string secret;
};

#endif