/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:19:57 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/05 19:47:33 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include <string>

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat Default Constructor Called." << std::endl;
}

Cat::Cat(const Cat& copy)
{
    *this = copy;
    std::cout << "Cat Copy Constructor Called." << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
    if (this == &copy)
        return *this;
    this->type = copy.type;
    std::cout << "Cat Copy Assigment Operator Called." << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Default Destructor Called." << std::endl;
}

void Cat::makeSound() const
{
     std::cout << " 🐾 Miaavvv Miav Miav m i a v 🐾 " << std::endl;    
}

std::string Cat::getType() const
{
    return this->type;
}