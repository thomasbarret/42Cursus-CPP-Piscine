/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:05 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/12 19:03:49 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : _brain(new Brain()) {
	this->type = "Cat";
    std::cout << "Cat has been created." << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other) {
    this->_brain = new Brain(*other._brain); 
}

void Cat::makeSound(void) const {
	std::cout << "Miouw Miouw 🐱" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        AAnimal::operator=(other);
        delete this->_brain;
        this->_brain = new Brain(*other._brain);      
    }
    std::cout << "Cat " << this->type << " has been assigned." << std::endl;
    return *this;
}

Brain* Cat::getBrain(void) const {
    return this->_brain;
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "Cat " << this->type << " has been destroyed." << std::endl;
}