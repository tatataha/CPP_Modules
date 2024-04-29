/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:21:40 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/04 14:21:42 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private:
		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );
	public:
		Harl();
		~Harl();
		void complain( std::string level );
};


#endif