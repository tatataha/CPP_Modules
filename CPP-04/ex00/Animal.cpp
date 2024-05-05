/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:09:24 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/05 19:43:08 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <string>


Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal Default Constructor Called." << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal Constructor Called." << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Animal Copy Constructor Called." << std::endl;
}

Animal& Animal::operator=(const Animal &copy)
{
	if (this == &copy)
		return *this;
	this->type = copy.type;
	std::cout << "Copy Assigment Operator Called." << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Default Destructor Called." << std::endl;
}

void    Animal::makeSound() const
{
	std::cout << "Animals Sound 🔊" << std::endl;
}

std::string Animal::getType() const
{
	return  this->type;
}


