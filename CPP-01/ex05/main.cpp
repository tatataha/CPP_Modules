/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main copy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:21:47 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/04 14:21:49 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argc, char **argv)
{
	std::string level;
	Harl harl;

	if(argc != 2)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (1);
	}

	level = argv[1];
	harl.complain(level);

}