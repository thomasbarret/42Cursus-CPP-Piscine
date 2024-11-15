/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:21:36 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/12 21:49:30 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default") {
	for (int i = 0; i < 4; i++) {
		this->_materia[i] = 0;
	}
	for (int i = 0; i < 8; i++) {
		this->_ground[i] = 0;
	}
	std::cout << "Character has been created." << std::endl;
}

Character::Character(const Character& other) {
	*this = other;
}

Character& Character::operator=(const Character& other) {
	if (this != &other) {
		this->_name = other.getName();
		for (int i = 0; i < 4; i++) {
			this->_materia[i] = other._materia[i];
		}
		for (int i = 0; i < 8; i++) {
			this->_ground[i] = other._ground[i];
		}
	}
	std::cout << "Character has been assigned." << std::endl;
	return *this;
}

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++) {
		this->_materia[i] = 0;
	}
	for (int i = 0; i < 8; i++) {
		this->_ground[i] = 0;
	}
	std::cout << "Character has been created." << std::endl;
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (i == 3 && this->_materia[i] != 0) {
			std::cout << "Character has already 4 materia equipped." << std::endl;
			return;
		}
		if (this->_materia[i] == m && this->_materia[i] != 0) {
			std::cout << "Character already has this materia equipped." << std::endl;
			return;
		}
		if (this->_materia[i] == 0) {
			this->_materia[i] = m;
			break;
		}
	}
	for (int i = 0; i < 8; i++) {
		if (this->_ground[i] == m) {
			this->_ground[i] = 0;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		for (int i = 0; i < 8; i++) {
			if (i == 9 && this->_ground[i] != 0) {
				std::cout << "Character has already 10 materia on the ground." << std::endl;
				return;
			}
			if (this->_ground[i] == 0) {
				this->_ground[i] = this->_materia[idx];
				this->_materia[idx] = 0;
				break;
			}
		}
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->_materia[idx] != 0) {
		this->_materia[idx]->use(target);
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != 0) {
			delete this->_materia[i];
			this->_materia[i] = 0;
		}
	}
	for (int i = 0; i < 8; i++) {
		if (this->_ground[i] != 0) {
			delete this->_ground[i];
			this->_ground[i] = 0;
		}
	}
	std::cout << "Character has been destroyed." << std::endl;
}