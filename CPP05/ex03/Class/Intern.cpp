/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:52:44 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/24 20:05:11 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) {
	(void)other;
}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return *this;
}

AForm* Intern::makeForm(const std::string formName, const std::string target) {
	const char *formsName[3] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};
	int i = 0;

	for (; i < 3; i++)
        if (formsName[i] == formName)
			break;

	switch (i) {
		case 0:
			std::cout << "Intern creates " << formName << std::endl;
			return new RobotomyRequestForm(target);
		case 1:
			std::cout << "Intern creates " << formName << std::endl;
			return new PresidentialPardonForm(target);
		case 2:
			std::cout << "Intern creates " << formName << std::endl;
			return new ShrubberyCreationForm(target);
		default:
			std::cout << "Index: " << i << std::endl; // "Index: 3	
			std::cout << "Form name not found" << std::endl;
	}
	return NULL;
}

Intern::~Intern() {}
