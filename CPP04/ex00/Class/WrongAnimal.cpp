/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:05 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/10 16:25:41 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("?") {
    std::cout << "WrongAnimal has been created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    *this = other;
}

std::string WrongAnimal::getType(void) const {
    return this->type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        this->type = other.getType();
    }
    std::cout << "WrongAnimal " << this->type << " has been assigned." << std::endl;
    return *this;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "I am an unidentified WrongAnimal 👽" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal " << this->type << " has been destroyed." << std::endl;
}