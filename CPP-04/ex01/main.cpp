/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:41:01 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/07 16:41:03 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{   

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    int size = 20; //number of animal
    int a = -1;

    Animal* animal[size];

    std::cout << "--- Constructions---" << std::endl;
    try {
        while (++a < size/2)
            animal[a] = new Dog();
        while (a < size)
            animal[a++] = new Cat();
    } catch (const std::bad_alloc&)
    {
        for (int j = 0; j < a; j++)
            delete animal[j];
        return 1;
    }

    std::cout << "---" << std::endl;

    std::cout << "---Destructions---" << std::endl;
    for(int j = 0; j < size ; j++)
        if (animal[j])
            delete animal[j];
    return 0;
}
