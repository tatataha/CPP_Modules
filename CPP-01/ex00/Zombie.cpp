/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 07:32:28 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/02 07:57:13 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout   <<  "Zombie \"" << Name << "\" is destroyed." << std::endl;
}

Zombie::Zombie(std::string Name) : Name(Name)
{
	std::cout   <<  "Zombie \"" << Name << "\" was born." << std::endl;
}

void    Zombie::announce()
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
