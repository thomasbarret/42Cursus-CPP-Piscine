/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:08:04 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/11 18:20:55 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : _type("ice") {
	std::cout << "Ice has been created." << std::endl;
}

Ice::Ice(const Ice& other) {
	*this = other;
}

Ice& Ice::operator=(const Ice& other) {
	if (this != &other) {
		this->_type = other.getType();
	}
	std::cout << "Ice has been assigned." << std::endl;
	return *this;
}

AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice has been destroyed." << std::endl;
}