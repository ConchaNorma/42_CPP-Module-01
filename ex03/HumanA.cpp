/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 23:06:27 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/23 19:36:38 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : h_name(name), h_weapon(weapon)
{

}

void	HumanA::attack()
{
	std::cout << this->h_name << " attack with their " << h_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	return ;
}
