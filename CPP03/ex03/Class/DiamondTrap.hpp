/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:21:36 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/09 17:08:33 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_DIAMONDTRAP_H
#define CPP_DIAMONDTRAP_H

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string& name);
    	DiamondTrap(const DiamondTrap& other);
    	DiamondTrap& operator=(const DiamondTrap& other);

		void whoAmI();
		void attack(const std::string& target);
    	~DiamondTrap();
};

#endif