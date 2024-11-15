/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:44:15 by tbarret           #+#    #+#             */
/*   Updated: 2024/07/03 18:20:50 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Class/Base.hpp"

Base *generate(void) {
	srand(time(0));
	int random = rand() % 3;
	if (random == 0) {
		std::cout << "A instance created" << std::endl;
		return new A();
	} else if (random == 1) {
		std::cout << "B instance created" << std::endl;
		return new B();
	} else {
		std::cout << "C instance created" << std::endl;
		return new C();
	}
}

void identify(Base *p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Unknown" << std::endl;
	}
}

void identify(Base &r) {
	try {
		A &a = dynamic_cast<A&>(r);
		(void)a;
		std::cout << "A" << std::endl;
	} catch (std::bad_cast &bc) {
		try {
			B &b = dynamic_cast<B&>(r);
			(void)b;
			std::cout << "B" << std::endl;
		} catch (std::bad_cast &bc) {
			try {
				C &c = dynamic_cast<C&>(r);
				(void)c;
				std::cout << "C" << std::endl;
			} catch (std::bad_cast &bc) {
				std::cout << "Unknown" << std::endl;
			}
		}
	}
}