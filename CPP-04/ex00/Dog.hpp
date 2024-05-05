/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:27:37 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/05 19:48:35 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
			Dog();
			Dog(const Dog& copy);
			Dog& operator=(const Dog& copy);
			~Dog();
			
			void	makeSound() const;
			std::string	getType() const;
};

#endif