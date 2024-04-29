/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 07:59:52 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/04 14:41:01 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{	
	Zombie *army = new	Zombie[N];
	while (N > 0)
	{
		army[N].NameSetter(name);
		N--;
	}
	return (army);
}