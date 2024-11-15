/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:05 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/10 16:06:19 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	this->type = "WrongCat";
    std::cout << "WrongCat has been created." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
    *this = other;
}

void WrongCat::makeSound(void) const {
	std::cout << "Wrong Miouw Miouw 🐱" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        this->type = other.getType();
    }
    std::cout << "WrongCat " << this->type << " has been assigned." << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat " << this->type << " has been destroyed." << std::endl;
}