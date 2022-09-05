/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:16:42 by abkasmi           #+#    #+#             */
/*   Updated: 2022/09/02 11:16:42 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Harl {

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:

	Harl();
	~Harl();

	void	complain(std::string level);

};