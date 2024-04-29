/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:51:41 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/02 02:41:40 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		int NumContacts;
	
		static const int MaxCapacity = 8;
		Contact contacts[MaxCapacity];
	public:
		PhoneBook();
		~PhoneBook();
		bool    AddContact(Contact &Contact);
		void    SearchContact();
		void    ContactİsValid(std::string &FirstName, std::string &LastName, std::string &NickName, std::string &PhoneNumber, std::string &DarkestSecret);
		int GetSize();
    	Contact GetContact(int index);
};

#endif
