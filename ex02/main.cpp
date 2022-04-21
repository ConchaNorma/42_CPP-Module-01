/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:45:36 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/21 21:35:56 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main (void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*ptr_string = &string;
	std::string	&ref_string = string;

	std::cout << std::endl;
	std::cout << "Memory address of the string variable: \t" << &string << std::endl;
	std::cout << "Memory address held by stringPTR: \t" << ptr_string << std::endl;
	std::cout << "Memory address held by stringREF: \t" << &ref_string << std::endl;
	std::cout << std::endl;
	std::cout << "Value of the string variable: \t" << string << std::endl;
	std::cout << "Value pointed to by stringPTR: \t" << *ptr_string << std::endl;
	std::cout << "Value pointed to by stringREF: \t" << ref_string << std::endl;
	return 0;
}
