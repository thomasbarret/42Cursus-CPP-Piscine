/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:17:21 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/05 10:17:23 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_WEAPON_H
#define CPP_WEAPON_H

#include <iostream>
#include <iomanip>
#include <string>

class Weapon {
	private:
		std::string _type;
	public:
		void announce(void);
		const std::string& getType(void) const;
		void setType(std::string type);
		Weapon(std::string type);
		~Weapon();
};


#endif
