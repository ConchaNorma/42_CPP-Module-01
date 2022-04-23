/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:59:20 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/23 19:36:10 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name) : h_name(name)
{

}

void	HumanB::setWeapon(Weapon& weapon)
{
	h_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->h_name << " attack with their " << h_weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
	return ;
}
