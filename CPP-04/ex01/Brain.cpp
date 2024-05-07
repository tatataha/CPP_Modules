/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:40:30 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/07 16:40:32 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//Construtors
Brain::Brain()
{
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain& copyObject)
{
    std::cout << "Brain copy constructor called." << std::endl;
    *this = copyObject;
}

//Destructor
Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}

//Operator Overloading
Brain& Brain::operator=(const Brain& copyObject)
{
    std::cout << "Brain copy assignment operator called." << std::endl;
    for (int i=0 ; i < 100 ; i++)
        this->ideas[i] = copyObject.ideas[i];
    return *this;
}