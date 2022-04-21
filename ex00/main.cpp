/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:45:36 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/21 08:24:10 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main ()
{
	std::string	str;

	while(1)
	{
		std::cout << "Enter Zombie name: ";
		if (!getline(std::cin, str))
			exit(1);
		if (!str.length())
			continue ;
		randomChump(str);
	}
	return 0;
}
