/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:00:20 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/04 02:20:15 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private :
		std::string name;
		Weapon *weapon;
	public :
		HumanB();
		~HumanB();
		HumanB(const std::string& name) : name(name){}
		void	attack();
        void    setWeapon(Weapon *newWeapon);
        std::string getName();
		
};

#endif
