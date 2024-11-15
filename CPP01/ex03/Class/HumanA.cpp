/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:53 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/05 17:33:23 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {};

HumanA::~HumanA() {};

void HumanA::attack(void) {
	std::cout << this->_name << "  attacks with their " << this->_weapon.getType() << std::endl;
}