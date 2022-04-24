/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:44:50 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/24 17:56:21 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug( void )
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string	complain[4] = {"debug", "info", "warning", "error"};

	void (Harl::*comp_ptr[4])(void);

	comp_ptr[0] = &Harl::debug;
	comp_ptr[1] = &Harl::info;
	comp_ptr[2] = &Harl::warning;
	comp_ptr[3] = &Harl::error;

	for( int i = 0; i < 4; i++ )
	{
		if (complain[i] == level)
			return((this->*comp_ptr[i])());
	}
}
