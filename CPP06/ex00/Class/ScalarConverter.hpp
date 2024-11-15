/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:02:23 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/28 12:24:09 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CPP_SCALARCONVERTER_H
# define CPP_SCALARCONVERTER_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

enum Type {
	INVALID = -1,
	CHAR = 0,
	INT = 1,
	FLOAT = 2,
	DOUBLE = 3,
};

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
    	ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();
		static int getType(const std::string& str);
		static bool isChar(const std::string& literal);
		static bool isInt(const std::string& literal);
		static bool isFloat(const std::string& literal);
		static bool isDouble(const std::string& literal);

		static void byInt(const std::string& literal);
		static void byFloat(const std::string& literal);
		static void byDouble(const std::string& literal);
		static void byChar(const std::string& literal);
	public:
		static void convert(const std::string& str);
		
};

#endif