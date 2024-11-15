/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:09:35 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/12 19:01:03 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain has been created." << std::endl;
}

Brain::Brain(const Brain& other) {
  	for (int i = 0; i < 100; i++) {
        this->_ideas[i] = other._ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = other._ideas[i];
		}
	}
	std::cout << "Brain has been assigned." << std::endl;
	return *this;
}

void Brain::setIdea(int index, std::string idea) {
	if (index < 0 || index >= 100) {
		std::cout << "Index out of range." << std::endl;
		return;
	}
	this->_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
	if (index < 0 || index >= 100) {
		std::cout << "Index out of range." << std::endl;
		return "";
	}
	if (this->_ideas[index].empty()) {
		std::cout << "Idea is empty." << std::endl;
		return "";
	}
	return this->_ideas[index];
}

Brain::~Brain() {
	std::cout << "Brain has been destroyed." << std::endl;
}