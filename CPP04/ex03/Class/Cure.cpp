/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:14:54 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/11 18:15:15 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : _type("cure") {
	std::cout << "Cure has been created." << std::endl;
}

Cure::Cure(const Cure& other) {
	*this = other;
}

Cure& Cure::operator=(const Cure& other) {
	if (this != &other) {
		this->_type = other.getType();
	}
	std::cout << "Cure has been assigned." << std::endl;
	return *this;
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure has been destroyed." << std::endl;
}