/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 03:13:44 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/05 03:16:32 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
    private :
        int					value;
        static const int	fractionalBits = 8;
    public :
        Fixed();
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed&	operator=(const Fixed &copy);
        int		getRawBits(void) const;
        void	setRawBits(int const raw);
};

#endif