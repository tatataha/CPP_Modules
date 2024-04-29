/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:48:22 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/02 02:21:06 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		Contact();
		~Contact();
		
		std::string GetFirstName() const;
    	std::string GetLastName() const;
    	std::string GetNickName() const;
    	std::string GetPhoneNumber() const;
    	std::string GetDarkestSecret() const;
	
		Contact(std::string FirstName, std::string LastName, std::string NickName, std::string PhoneNumber, std::string DarkestSecret);
		void    display();
	
};

#endif
