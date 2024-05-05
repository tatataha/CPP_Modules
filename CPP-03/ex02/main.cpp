/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:52:14 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/05 18:34:15 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
    FragTrap ab("ta");
    FragTrap ba("ha");

    ba.attack("ta");
    ab.takeDamage(ba.getAd());
    ab.beRepaired(ba.getAd());
}