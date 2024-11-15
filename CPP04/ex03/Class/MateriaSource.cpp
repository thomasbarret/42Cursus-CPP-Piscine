/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:37:21 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/12 20:47:39 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->_materia[i] = 0;
	}
	std::cout << "MateriaSource has been created." << std::endl;
}


MateriaSource::MateriaSource(const MateriaSource& other) {
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			this->_materia[i] = other._materia[i];
		}
	}
	std::cout << "MateriaSource has been assigned." << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] == 0) {
			this->_materia[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != 0 && this->_materia[i]->getType() == type) {
			return this->_materia[i]->clone();
		}
	}
	return 0;
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource has been destroyed." << std::endl;
    for (int i = 0; i < 4; ++i) {
        delete _materia[i];
    }
}