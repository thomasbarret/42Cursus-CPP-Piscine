/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:26:32 by tbarret           #+#    #+#             */
/*   Updated: 2024/07/08 15:40:00 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0) {
	this->_numbers = std::vector<int>();
	std::cout << "Span created" << std::endl;
}

Span::Span(unsigned int n) : _size(n) {
	this->_numbers = std::vector<int>();
	std::cout << "Span created" << std::endl;
}

Span::Span(Span const &src) {
	*this = src;
}

Span &Span::operator=(Span const &src) {
	if (this != &src) {
		this->_size = src._size;
	}
	return *this;
}

void Span::addNumber(int n) {;
	if (this->_numbers.size() >= this->_size)
		throw OutOfRangeException();
	if (n < INT_MIN || n > INT_MAX)
		throw OutOfRangeException();
	this->_numbers.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (this->_numbers.size() + std::distance(begin, end) > this->_size)
		throw OutOfRangeException();
	this->_numbers.insert(this->_numbers.end(), begin, end);
}

int Span::longestSpan() {
	if (this->_numbers.size() <= 1)
		throw NoSpanException();
	int max = *std::max_element(this->_numbers.begin(), this->_numbers.end());
	int min = *std::min_element(this->_numbers.begin(), this->_numbers.end());
	return max - min;
}

int Span::shortestSpan() {
	if (this->_numbers.size() <= 1)
		throw NoSpanException();
	std::vector<int> tmp = this->_numbers;
	std::sort(tmp.begin(), tmp.end());
	int min = INT_MAX;
	for (unsigned int i = 0; i < tmp.size() - 1; i++) {
		if (tmp[i + 1] - tmp[i] < min)
			min = tmp[i + 1] - tmp[i];
	}
	return min;
}

Span::~Span() {
	std::cout << "Span destroyed" << std::endl;
}

const char *Span::NoSpanException::what() const throw() {
	return "No span to find";
}

const char *Span::OutOfRangeException::what() const throw() {
	return "Out of range";
}