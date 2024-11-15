/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:05 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/10 20:19:11 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	this->type = "Cat";
    std::cout << "Cat has been created." << std::endl;
}

Cat::Cat(const Cat& other) {
    *this = other;
}

void Cat::makeSound(void) const {
	std::cout << "Miouw Miouw 🐱" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        this->type = other.getType();
    }
    std::cout << "Cat " << this->type << " has been assigned." << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat " << this->type << " has been destroyed." << std::endl;
}