/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:48:46 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/23 17:10:26 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

# include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string	type);
	~Weapon();
	void setType(std::string type);
	std::string const & getType() const;
};

#endif
