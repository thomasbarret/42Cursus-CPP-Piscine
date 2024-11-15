/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:21 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/05 10:16:23 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Class/Zombie.hpp"

void randomChump(std::string name) {
	Zombie z(name);
	z.announce();
}