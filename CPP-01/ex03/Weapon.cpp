/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:11:31 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/04 00:19:47 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::~Weapon() {}

const std::string&	Weapon::getType() const
{
	return this->type;
}

void	Weapon::setType(std::string intype)
{
	this->type = intype;
}