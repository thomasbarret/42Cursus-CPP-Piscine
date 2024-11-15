/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:21:39 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/09 17:24:54 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name", 100, 50, 30), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap " << this->_name << " is born" << std::endl;
	this->_name = "default";
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name", 100, 50, 30), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap " << name << " is born" << std::endl;
	this->_name = name;
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other) {
	std::cout << "DiamondTrap " << this->_name << " has been cloned" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << "DiamondTrap " << this->_name << " has been assigned" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " is dead" << std::endl;
}