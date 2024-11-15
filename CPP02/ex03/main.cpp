/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:25 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/08 17:14:44 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Point.hpp"

int main() {
    // Création des sommets du triangle
    Point a(2, 8);
    Point b(8, 2);
    Point c(10, 10);

    Point D(6, 8); // Point à l'intérieur du triangle
    Point E(2, 4); // Point à l'extérieur du triangle

    std::cout << "D: " << std::boolalpha << bsp(a, b, c, D) << std::endl;
    std::cout << "E: " << std::boolalpha << bsp(a, b, c, E) << std::endl;

    return 0;
}
