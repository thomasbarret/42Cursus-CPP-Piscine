/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:05 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/10 20:19:07 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("?") {
    std::cout << "Animal has been created." << std::endl;
}

Animal::Animal(const Animal& other) {
    *this = other;
}

std::string Animal::getType(void) const {
    return this->type;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        this->type = other.getType();
    }
    std::cout << "Animal " << this->type << " has been assigned." << std::endl;
    return *this;
}

void Animal::makeSound(void) const {
	std::cout << "I am an unidentified animal 👽" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal " << this->type << " has been destroyed." << std::endl;
}