/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:47:34 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/03 15:17:22 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(const std::string fName , const std::string lName, const std::string nName, const std::string phone, const std::string secret)
    : _firstName(fName), _lastName(lName), _nickname(nName), _phoneNumber(phone), _darkestSecret(secret) {}

void Contact::displayLine(int index) const {
    std::cout << "| " << std::setw(10) << std::right << index << " | "
              << std::setw(10) << std::right << (_firstName.length() > 10 ? _firstName.substr(0, 9) + "." : _firstName) << " | "
              << std::setw(10) << std::right << (_lastName.length() > 10 ? _lastName.substr(0, 9) + "." : _lastName) << " | "
              << std::setw(10) << std::right << (_nickname.length() > 10 ? _nickname.substr(0, 9) + "." : _nickname) << " |" << std::endl;
}
 
void Contact::displayDetails() const {
    std::cout << "First Name: " << _firstName << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone Number: " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
}

bool Contact::isEmpty() const {
    return _firstName.empty() && _lastName.empty() && _nickname.empty() && _phoneNumber.empty() && _darkestSecret.empty();
};

Contact::~Contact() {};