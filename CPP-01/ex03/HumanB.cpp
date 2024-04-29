/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:26:28 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/04 00:39:51 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB() {}

HumanB::~HumanB() {}

std::string HumanB::getName()
{
	return this->name;
}

void    HumanB::setWeapon(Weapon *newWeapon)
{
	this->weapon = newWeapon;
}

void    HumanB::attack()
{
	std::cout << getName() << " attacks with their " << weapon->getType() << std::endl;
}