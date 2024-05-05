/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:18:03 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/05 19:47:56 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
			Cat();
			Cat(const Cat& copy);
			Cat& operator=(const Cat& copy);
			~Cat();
			
			void	makeSound() const;
			std::string	getType() const;
};

#endif