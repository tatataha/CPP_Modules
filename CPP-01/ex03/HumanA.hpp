/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:00:20 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/04 14:49:27 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private :
		std::string name;
		Weapon *weapon;
	public :
		HumanA();
		~HumanA();
		HumanA(std::string name, Weapon *weapon);
		void setWeapon(Weapon *inWeapon);
		void setName(std::string inname);
		std::string	getName();
		void	attack();
};

#endif