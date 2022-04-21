/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:53:59 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/21 22:18:07 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CLASS_H
# define HUMAN_A_CLASS_H

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon	*weapon;
public:
	HumanA(std::string name, Weapon *weapon);
	~HumanA();
	void attack();
};

#endif
