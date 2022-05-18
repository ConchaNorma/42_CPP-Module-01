/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:14:26 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/18 23:22:51 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie z;

	z.set_name(name);
	z.announce();
}

// void	randomChump(std::string name)
// {
// 	Zombie *z;

// 	z = newZombie(name);
// 	z->announce();
// 	delete z;
// }
