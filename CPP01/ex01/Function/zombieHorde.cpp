/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:42 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/05 10:16:45 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Class/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name ) {
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i] = Zombie(name);
		horde[i].announce();
	}
	return horde;
}