#include "Fixed.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:05 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/08 15:54:40 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0) {}
Fixed::Fixed(const int value) : _fixedPoint(value << _fractionalBits) {}
Fixed::Fixed(const float value) : _fixedPoint(roundf(value * (1 << _fractionalBits))) {}

Fixed::Fixed(const Fixed &src) {
    *this = src;
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) { 
        this->_fixedPoint = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const {
    return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw) {
    this->_fixedPoint = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(_fixedPoint) / (1 << _fractionalBits);
}

int Fixed::toInt() const {
    return _fixedPoint >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

bool Fixed::operator>(const Fixed& other) const {
    return this->toFloat() > other.toFloat();
}

bool Fixed::operator<(const Fixed& other) const {
    return this->toFloat() < other.toFloat();
}

bool Fixed::operator>=(const Fixed& other) const {
    return this->toFloat() >= other.toFloat();
}

bool Fixed::operator<=(const Fixed& other) const {
    return this->toFloat() <= other.toFloat();
}

bool Fixed::operator==(const Fixed& other) const {
    return this->toFloat() == other.toFloat();
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->toFloat() != other.toFloat();
}

Fixed& Fixed::operator++() {
    this->_fixedPoint++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed& Fixed::operator--() {
    this->_fixedPoint--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return tmp;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return a < b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return a > b ? a : b;
}

Fixed::~Fixed() {}
