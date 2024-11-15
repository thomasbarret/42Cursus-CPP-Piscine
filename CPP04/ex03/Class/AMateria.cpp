/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:57:45 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/11 19:02:41 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default") {
    std::cout << "AMateria has been created." << std::endl;
}

AMateria::AMateria(const AMateria& other) {
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other) {
        this->_type = other.getType();
    }
    std::cout << "AMateria " << this->_type << " has been assigned." << std::endl;
    return *this;
}

std::string const & AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter& target) {
    std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria " << this->_type << " has been destroyed." << std::endl;
}

