/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:35:49 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/21 19:19:42 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << std::endl;
	std::cout << "Zombie name was: " << this->name << std::endl;
	std::cout << "Destruct Zombie" << std::endl;
	return ;
}
