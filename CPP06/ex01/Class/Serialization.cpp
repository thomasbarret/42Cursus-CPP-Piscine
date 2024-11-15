/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:38:03 by tbarret           #+#    #+#             */
/*   Updated: 2024/07/03 16:47:37 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization() {
	std::cout << "Serialization default constructor" << std::endl;
}

Serialization::Serialization(const Serialization& other) {
	std::cout << "Serialization copy constructor" << std::endl;
	*this = other;
}

Serialization& Serialization::operator=(const Serialization& other) {
	std::cout << "Serialization assignation operator" << std::endl;
	(void)other;
	return *this;
}

uintptr_t Serialization::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialization::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

Serialization::~Serialization() {
	std::cout << "Serialization destructor" << std::endl;
}