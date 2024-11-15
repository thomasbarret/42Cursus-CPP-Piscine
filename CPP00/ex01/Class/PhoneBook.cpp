/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:44:34 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/03 14:48:22 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _contactCount(0) {};

void PhoneBook::addContact(const Contact contact) {
	if (_contactCount < 8) {
		_contacts[_contactCount] = contact;
		_contactCount++;
	} else {
		_contacts[_contactCount - 1] = contact;
	}
}
void PhoneBook::displayContacts() const {
	std::cout << "| " << std::setw(10) << std::right << "Index" << " | "
				<< std::setw(10) << std::right << "First Name" << " | "
				  << std::setw(10) << std::right << "Last Name" << " | "
				  << std::setw(10) << std::right << "Nickname" << " |" << std::endl;
		for (int i = 0; i < _contactCount; i++) {
			_contacts[i].displayLine(i);
		}
	}
void PhoneBook::displayContact(int index) const {
	if (index >= 0 && index < _contactCount) {
		_contacts[index].displayDetails();
	} else {
		std::cout << "Error: You have entered an invalid index" << std::endl;
	}
}
PhoneBook::~PhoneBook() {};