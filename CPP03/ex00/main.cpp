/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:25 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/09 14:26:35 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/ClapTrap.hpp"

int main( void ) {
	ClapTrap claptrap("BipBoup 🤖");

    claptrap.attack("Antoine");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("Didier");
    claptrap.takeDamage(15);
    claptrap.beRepaired(5);
return 0;
}