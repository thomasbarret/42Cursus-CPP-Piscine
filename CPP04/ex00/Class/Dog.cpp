/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:05 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/10 20:19:15 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	this->type = "Dog";
    std::cout << "Dog has been created." << std::endl;
}

Dog::Dog(const Dog& other) {
    *this = other;
}

void Dog::makeSound(void) const {
	std::cout << "Wouf Wouf 🐶" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        this->type = other.getType();
    }
    std::cout << "Dog " << this->type << " has been assigned." << std::endl;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog " << this->type << " has been destroyed." << std::endl;
}