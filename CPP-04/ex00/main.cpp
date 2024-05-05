/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:41:48 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/05 19:41:50 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){

    std::cout << "Animal Class Start." << std::endl << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << "Animal Class End." << std::endl << std::endl;
    
    {
        std::cout << "WrongAnimal Class Start" << std::endl << std::endl;
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        meta->makeSound();
        std::cout << "WrongAnimal Class End." << std::endl << std::endl;

        delete i;
        delete meta;
    }
    std::cout << std::endl;
    
    delete j;
    delete i;
    delete meta;

    return 0;
}