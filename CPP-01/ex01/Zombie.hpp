/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 07:27:46 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/02 08:10:20 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	private :
		std::string Name;
	public :
		Zombie();
		~Zombie();
		Zombie(std::string Name);
		void	announce(void);
		void	NameSetter(std::string name);
};

#endif
