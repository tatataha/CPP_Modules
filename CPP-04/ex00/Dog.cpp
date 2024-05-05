/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:32:48 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/05 19:48:21 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <string>

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Default Constructor Called." << std::endl;
}

Dog::Dog(const Dog& copy)
{
	*this = copy;
	std::cout << "Dog Copy Constructor Called." << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
	if (this == &copy)
		return *this;
	this->type = copy.type;
	std::cout << "Dog Copy Assigment Operator Called." << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Default Destructor Called." << std::endl;
}

void Dog::makeSound() const
{
	   std::cout << " 🐺 HAaaAAvv Hav hav H a V 🦴 " << std::endl;
}

std::string Dog::getType() const
{
	return this->type;
}