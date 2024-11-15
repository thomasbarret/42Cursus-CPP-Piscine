/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:05 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/10 16:25:41 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAAnimal.hpp"
#include <iostream>

WrongAAnimal::WrongAAnimal() : type("?") {
    std::cout << "WrongAAnimal has been created." << std::endl;
}

WrongAAnimal::WrongAAnimal(const WrongAAnimal& other) {
    *this = other;
}

std::string WrongAAnimal::getType(void) const {
    return this->type;
}

WrongAAnimal& WrongAAnimal::operator=(const WrongAAnimal& other) {
    if (this != &other) {
        this->type = other.getType();
    }
    std::cout << "WrongAAnimal " << this->type << " has been assigned." << std::endl;
    return *this;
}

void WrongAAnimal::makeSound(void) const {
	std::cout << "I am an unidentified WrongAAnimal 👽" << std::endl;
}

WrongAAnimal::~WrongAAnimal() {
    std::cout << "WrongAAnimal " << this->type << " has been destroyed." << std::endl;
}