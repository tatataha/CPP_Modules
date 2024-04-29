/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 07:46:44 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/02 07:52:47 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);

void	randomChump(std::string name);

int main()
{
	Zombie  *New = newZombie("Quaresma");
	New->announce();
	randomChump("Talisca");
	delete New;
}