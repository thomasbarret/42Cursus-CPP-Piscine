/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:11 by tbarret           #+#    #+#             */
/*   Updated: 2024/07/03 18:18:43 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_BASE_H
#define CPP_BASE_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

class Base {
	public:
		virtual ~Base() {};
};

class A : public Base {
	public:
		A();
		~A();
};

class B : public Base {
	public:
		B();
		~B();
};

class C : public Base {
	public:
		C();
		~C();
};

void identify(Base &r);
void identify(Base *p);
Base *generate(void);

#endif
