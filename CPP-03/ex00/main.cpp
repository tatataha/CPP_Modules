/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:52:14 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/05 18:09:34 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap a("Taha");
	ClapTrap b("Celik");


	a.attack("Celik");
	b.takeDamage(a.getAd());
	b.beRepaired(3);
	
	b.attack("Alp");
	a.takeDamage(b.getAd());
	a.beRepaired(20);
}