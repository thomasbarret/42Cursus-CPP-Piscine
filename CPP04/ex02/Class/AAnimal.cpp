/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:05 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/10 20:19:07 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : type("?") {
    std::cout << "AAnimal has been created." << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
    *this = other;
}

std::string AAnimal::getType(void) const {
    return this->type;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
    if (this != &other) {
        this->type = other.getType();
    }
    std::cout << "AAnimal " << this->type << " has been assigned." << std::endl;
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal " << this->type << " has been destroyed." << std::endl;
}