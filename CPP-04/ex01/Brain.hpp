/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:40:35 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/07 16:40:36 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain 
{
    protected:
        std::string ideas[100]; 
    public:
        Brain();
        Brain(const Brain& copyObject);

        ~Brain();
        
        Brain& operator=(const Brain& copyObject);
};

#endif