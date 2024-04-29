/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 07:32:28 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/02 08:17:57 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout   <<  "Zombie \"" << "<NULL>" << "\" was born with default constructor." << std::endl;
}

Zombie::~Zombie()
{
	std::cout   <<  "Zombie \"" << Name << "\" is destroyed." << std::endl;
}

Zombie::Zombie(std::string Name) : Name(Name)
{
	std::cout   <<  "Zombie \"" << Name << "\" was born." << std::endl;
}

void	Zombie::NameSetter(std::string name)
{
	this->Name = name;
}

void    Zombie::announce()
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
