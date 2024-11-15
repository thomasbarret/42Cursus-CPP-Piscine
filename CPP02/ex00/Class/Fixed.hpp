/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:11 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/08 16:31:31 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_FIXED_H
#define CPP_FIXED_H

#include <iostream>

class Fixed {
	private:
		int _fixedPoint;
		static const int _fractionalBits = 8;
	public:
		Fixed();
    	Fixed(const Fixed& other); 
    	Fixed& operator=(const Fixed& other);
		int getRawBits(void) const;
    	void setRawBits(int const raw);
   		~Fixed();
};

#endif
