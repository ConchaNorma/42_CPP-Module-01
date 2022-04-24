/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:34:30 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/24 18:53:50 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"
# include <string>
#include <ctype.h>

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "ERROR: Invalid number of arguments" << std::endl;
		return -1;
	}
	std::string	level;
	while (*argv[1])
		level += (char)tolower(*(argv[1])++);
	harl.complain(level);

	return (0);
}
