/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:11 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/08 17:39:33 by tbarret          ###   ########.fr       */
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
   		~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
