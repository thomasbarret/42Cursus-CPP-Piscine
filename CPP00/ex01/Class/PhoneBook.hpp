/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:48:30 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/03 14:45:55 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
private:
	static const int MAX_CONTACTS = 8;
	Contact _contacts[MAX_CONTACTS];
	int _contactCount;
public:
	PhoneBook();
	void addContact(const Contact contact);
	void displayContacts() const;
	void displayContact(int index) const;
	~PhoneBook();
};