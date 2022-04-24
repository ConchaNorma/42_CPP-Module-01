/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:34:30 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/24 15:25:07 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "ERROR: Invalid number of arguments" << std::endl;
		return -1;
	}
	std::ifstream in(argv[1]);
	if (!in.is_open())
	{
		std::cout << "ERROR: File is not exist/open\n" << std::endl;
		return -1;
	}
	std::string file_out = argv[1];
	file_out += ".replace";

	std::ofstream out(file_out, std::ios_base::out | std::ios_base::trunc);

	std::string	buf;
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	for (getline(in, buf); !in.eof(); getline(in, buf))
	{
		for(int i = 0; i >= 0;)
		{
			i = buf.find(s1);
			if (i == -1)
				continue ;
			buf.erase(i, s1.length());
			buf.insert(i, s2);
		}
		out << buf << std::endl;
	}
	in.close();
	out.close();
	return 0;
}
