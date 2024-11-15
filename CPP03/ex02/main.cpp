/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:25 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/09 16:16:12 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/FragTrap.hpp"

int main() {
    FragTrap frag("Fraggy Boup 🤖");

    frag.attack("target");
    frag.takeDamage(20);
    frag.beRepaired(10);
    frag.highFivesGuys();

    return 0;
}