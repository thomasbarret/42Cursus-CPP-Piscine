/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:05 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/05 10:16:08 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Zombie " << name << " has been created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << _name << " has been destroyed" << std::endl;
}

void Zombie::announce(void) {
	std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}