/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 03:09:18 by muhcelik          #+#    #+#             */
/*   Updated: 2024/03/29 03:30:01 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

void	toupper_for_string(std::string arg)
{
	int	i = 0;
	while (arg[i])
	{
		if (std::isalpha(arg[i]))
			arg[i] = std::toupper(arg[i]);
		std::cout << arg[i];
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			toupper_for_string(av[i]);
			i++;
			std::cout << " ";
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}