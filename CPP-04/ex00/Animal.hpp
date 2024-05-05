/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:04:14 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/05 19:09:17 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
			std::string	type;
	public:
			Animal();
			Animal(std::string type);
			Animal(const Animal& copy);
			Animal& operator=(const Animal& copy);
			virtual ~Animal();

			virtual void	makeSound() const;
			std::string 	getType() const;
};

#endif