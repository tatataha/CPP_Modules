/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:40:20 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/07 16:40:22 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called." << std::endl;
    this->type = "unknown";
}

Animal::Animal(const std::string& type)
{
    std::cout << "Animal constructor for " << type << "  called." << std::endl;
    this->type = type;
}

Animal::Animal(const Animal& copyObject)
{
    std::cout << "Animal copy constructor called." << std::endl;
    *this = copyObject;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called." << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

Animal& Animal::operator=(const Animal& copyObject)
{
    std::cout << "Assignment operator called." << std::endl;
    this->type = copyObject.getType();
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Unknown sound." << std::endl;
}
