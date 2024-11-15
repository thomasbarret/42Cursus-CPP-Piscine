/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:34 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/05 10:16:37 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_ZOMBIE_H
#define CPP_ZOMBIE_H

#include <iostream>
#include <iomanip>
#include <string>

class Zombie {
	private:
		std::string _name;
	public:
		void announce(void);
		void setName(std::string name);
		Zombie(std::string name = "Didier");
		~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
