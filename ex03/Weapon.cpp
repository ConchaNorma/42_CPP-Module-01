/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:50:04 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/23 19:40:33 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

void	Weapon::setType(std::string type)
{
	this->type = type;
}

std::string const &  Weapon::getType() const
{
	return (this->type);
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{
	return ;
}
