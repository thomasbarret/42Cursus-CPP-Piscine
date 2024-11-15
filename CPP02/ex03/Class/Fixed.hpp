/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:11 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/08 17:40:38 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_FIXED_H
#define CPP_FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _fixedPoint;
		static const int _fractionalBits = 8;
	public:
		Fixed();
    	Fixed(const int value);
   		Fixed(const float value);
		Fixed(const Fixed& other); 

		int getRawBits(void) const;
    	void setRawBits(int const raw);
		
		float toFloat() const;
    	int toInt() const;
		Fixed& operator=(const Fixed& other);
		
 		Fixed &operator++();
    	Fixed operator++(int);
    	Fixed &operator--();    
    	Fixed operator--(int); 
		
    	Fixed operator+(const Fixed& other) const;
    	Fixed operator-(const Fixed& other) const;
    	Fixed operator*(const Fixed& other) const;
    	Fixed operator/(const Fixed& other) const;

		bool operator>(const Fixed& other) const;
    	bool operator<(const Fixed& other) const;
    	bool operator>=(const Fixed& other) const;
   		bool operator<=(const Fixed& other) const;
    	bool operator==(const Fixed& other) const;
    	bool operator!=(const Fixed& other) const;

		static const Fixed& min(const Fixed& a, const Fixed& b);
    	static const Fixed& max(const Fixed& a, const Fixed& b);
   		~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
