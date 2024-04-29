/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 03:14:48 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/05 03:16:03 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed&	Fixed::operator=(const Fixed &copy)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &copy)
        this->value = copy.getRawBits();
    return *this;
}

int		Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void	Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}
