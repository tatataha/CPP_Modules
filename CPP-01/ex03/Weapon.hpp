/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:55:20 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/03 15:46:47 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	private :
		std::string	type;
	public :
		Weapon();
		~Weapon();
		Weapon(std::string type) : type(type) {}
		const std::string& getType() const;
		void	setType(std::string intype);
};

#endif