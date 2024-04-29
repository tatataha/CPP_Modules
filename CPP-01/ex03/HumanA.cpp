/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:18:56 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/04 14:51:14 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <string>

HumanA::HumanA() {}

HumanA::~HumanA() {}

HumanA::HumanA(const std::string name, Weapon *weapon)
{
	setName(name);
	setWeapon(weapon);
}

void	HumanA::setName(std::string inname)
{
	this->name = inname;
}

std::string	HumanA::getName()
{
	return this->name;
}

void HumanA::setWeapon(Weapon *inWeapon)
{
    this->weapon = inWeapon;
}

void	HumanA::attack()
{
	std::cout << getName() << " attacks with their " << weapon->getType() << std::endl;
}