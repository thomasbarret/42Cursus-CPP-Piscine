/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:39 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/05 14:13:37 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Zombie.hpp"

int main(void) {
	int number = 5;

	Zombie* horde = zombieHorde(number, "Horde 🧟‍");
	
	delete[] horde;
	return (0);
}