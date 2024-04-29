/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 07:46:44 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/02 08:20:37 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	int	N = 15;
	Zombie *army = zombieHorde(N, "civic");
	while (N > 0)
	{
		army[N].announce();
		N--;
	}
	delete [] army;
}