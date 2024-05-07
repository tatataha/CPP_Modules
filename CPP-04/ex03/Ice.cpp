/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:43:29 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/07 16:43:31 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    // std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice(const Ice& copyObject) : AMateria(copyObject)
{
    // std::cout << "Ice copy constructor called." << std::endl;
    *this = copyObject; 
} 

Ice::~Ice()
{
    // std::cout << "Ice default destructor called." << std::endl;
}

Ice& Ice::operator=(const Ice& copyObject)
{
    this->type = copyObject.getType();
    return *this;
}

AMateria* Ice::clone() const
{
    AMateria* clone = new Ice(*this);
    if (!clone)
    {
        std::cout << "Allocation error!" << std::endl;
        exit(1);
    }
    return clone;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}