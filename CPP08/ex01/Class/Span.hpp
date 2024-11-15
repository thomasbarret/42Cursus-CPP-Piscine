/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:14:53 by tbarret           #+#    #+#             */
/*   Updated: 2024/07/15 17:48:15 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_SPAN_HPP
#define CPP_SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

class Span {
	private:
		unsigned int _size;
		std::vector<int> _numbers;
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &src);
		Span &operator=(Span const &src);
		void addNumber(int n);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();
		~Span();
		class NoSpanException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class OutOfRangeException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
		
};

#endif