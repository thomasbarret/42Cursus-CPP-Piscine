/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:48 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/05 10:16:50 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
	std::string name = "HI THIS IS BRAIN";
	std::string *stringPTR = &name;
	std::string &stringREF = name;
	std::cout << "<name ADDRESS>: " << &name << std::endl;
	std::cout << "<stringPTR ADDRESS>: " << stringPTR << std::endl;
	std::cout << "<stringREF ADDRESS>: " << &stringREF << std::endl;
	std::cout << "<name VALUE>: " << name << std::endl;
	std::cout << "<stringPTR VALUE>: " << *stringPTR << std::endl;
	std::cout << "<stringREF VALUE>: " << stringREF << std::endl;
}