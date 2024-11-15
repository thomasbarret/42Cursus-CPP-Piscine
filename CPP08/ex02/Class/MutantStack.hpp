/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:14:53 by tbarret           #+#    #+#             */
/*   Updated: 2024/07/15 17:54:01 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MUTANTSTACK_HPP
#define CPP_MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		MutantStack();
		MutantStack(MutantStack const &src);
		MutantStack &operator=(MutantStack const &src);
		~MutantStack();
		class NoSpanException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class OutOfRangeException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		
		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {
	std::cout << "MutantStack created" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& src) : std::stack<T>(src) {
	std::cout << "MutantStack created by copy" << std::endl;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& rhs) {
	if (this != &rhs) {
		typename std::stack<T>::container_type::iterator it(this->c.begin());
		this->c.insert(it, rhs.c.begin(), rhs.c.end());
	}
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {
	std::cout << "MutantStack destroyed" << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
	return this->c.end();
}




#endif
