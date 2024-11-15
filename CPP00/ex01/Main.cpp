/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:42:52 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/02 18:46:43 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/PhoneBook.hpp"

static int strIsPrintable(std::string string) {
	for (int i = 0; string[i]; i++)
		if (!isprint(string[i]))
			return (0);
	return (1);
}

static int strIsDigit(std::string string) {
	for (int i = 0; string[i]; i++)
		if (!isdigit(string[i]))
			return (0);
	return (1);
}

int main(void)
{
    std::string command;
	PhoneBook phoneBook;
	
    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, or EXIT):" << std::endl;
        std::cin >> command;
		if (std::cin.eof()) break;
		if (command == "ADD")
		{
			std::string firstName;
			std::string lastName;
			std::string nickname;
			std::string phoneNumber;
			std::string darkestSecret;
			std::cout << "Enter first name: ";
			std::cin >> firstName;
			std::cout << "Enter last name: ";
			std::cin >> lastName;
			std::cout << "Enter nickname: ";
			std::cin >> nickname;
			std::cout << "Enter phone number: ";
			std::cin >> phoneNumber;
			if (!strIsDigit(phoneNumber))
			{
				std::cout << "Error: You have entered a non-digit character" << std::endl;
				continue;
			}
			std::cout << "Enter darkest secret: ";
			std::cin >> darkestSecret;
			if (!strIsPrintable(firstName) || !strIsPrintable(lastName) || !strIsPrintable(nickname) || !strIsPrintable(darkestSecret))
			{
				std::cout << "Error: You have entered a non-printable character" << std::endl;
				continue;
			}
			phoneBook.addContact(Contact(firstName, lastName, nickname, phoneNumber, darkestSecret));
		} else if (command == "SEARCH"){
			phoneBook.displayContacts();
			int index;
			std::cout << "Enter index: ";
			std::cin >> index;
			std::cin.clear();
			phoneBook.displayContact(index);
        } else if (command == "EXIT")
            break;
        else
            std::cout << "Error: You have entered an invalid command (ADD, SEARCH, or EXIT)" << std::endl;
    }
    return (0);
}