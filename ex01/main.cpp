/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:45:36 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/21 20:49:06 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main ()
{
	std::string	name;
	std::string	Nstr;
	int			N;
	Zombie*		z;

	while(1)
	{
		std::cout << "\nEnter Zombie name: ";
		if (!getline(std::cin, name))
			exit(1);
		if (!name.length())
			continue ;
		std::cout << "Enter Number of Zombie - N: ";
		if (!getline(std::cin, Nstr))
			exit(1);
		if (!Nstr.length())
			continue ;
		try
		{
			N = std::stoi(Nstr);
		}
		catch (std::invalid_argument const& ex)
		{
			N = -1;
		}
		if (N < 0) {std::cout << "Wrong N\n\n"; continue ;}

		z = zombieHorde(N, name);
		z[N / 2].set_name("george");
		for (int i = 0; i < N; i++)
			z[i].announce();
		delete[] z;
	}
	return 0;
}
