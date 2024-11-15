/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:05 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/12 19:03:21 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : _brain(new Brain()) {
	this->type = "Dog";
    std::cout << "Dog has been created." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    this->_brain = new Brain(*other._brain); 
}

void Dog::makeSound(void) const {
	std::cout << "Wouf Wouf 🐶" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete this->_brain;
        this->_brain = new Brain(*other._brain); 
    }
    std::cout << "Dog " << this->type << " has been assigned." << std::endl;
    return *this;
}

Brain* Dog::getBrain(void) const {
    return this->_brain;
}

Dog::~Dog() {
    delete this->_brain;
    std::cout << "Dog " << this->type << " has been destroyed." << std::endl;
}