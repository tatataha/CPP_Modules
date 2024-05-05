/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:09:33 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/05 17:50:36 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	private:
			std::string	name;
			int			hitPoints;
			int			energyPoints;
			int			attackDamage;
	public:
			ClapTrap();
			~ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap& copy);
			ClapTrap& operator=(const ClapTrap& object);
			
			void	attack(const std::string &target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			
			std::string getNm();
			int			getHp();
			int			getEp();
			int			getAd();
			
};

#endif