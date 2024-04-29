/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:41:48 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/04 00:40:32 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
        Weapon club =  Weapon("crude spiked club");
        HumanA bob("Bob", &club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(&club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}