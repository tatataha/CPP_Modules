/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:52:14 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/05 18:27:03 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ScavTrap ab("tata");
    ScavTrap ba("cel");

    ba.attack("tata");
    ab.takeDamage(ba.getAd());
    ab.beRepaired(ba.getAd());
}