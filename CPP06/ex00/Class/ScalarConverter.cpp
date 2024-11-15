/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:31:01 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/28 12:24:15 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits.h>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	*this = other;
}	

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

bool ScalarConverter::isChar(const std::string& literal) {
    return  literal[0] == '\'' && literal[2] == '\'' && literal.length() == 3;
}

bool ScalarConverter::isInt(const std::string &literal) {
	char *end;

	std::strtol(literal.c_str(), &end, 10);
	return *end == '\0';
}

bool ScalarConverter::isFloat(const std::string& literal) {
    char* end;

	if (literal == "-inff" || literal == "+inff" || literal == "nan")
		return true;

    std::strtof(literal.c_str(), &end);
    return *end == 'f' && *(end + 1) == '\0';
}

bool ScalarConverter::isDouble(const std::string& literal) {
	char* end;
    if (literal == "-inf" || literal == "+inf" || literal == "nan")
		return true;
    std::strtod(literal.c_str(), &end);
    return *end == '\0';
}

void ScalarConverter::byInt(const std::string& literal) {
	double r = strtod(literal.c_str(), NULL);

	if (r < 0 || r > 127)
		std::cout << "char: "<< "impossible" << std::endl;
	else if (std::isprint((int)r))
		std::cout << "char: "<<  "'" << static_cast<char>(r) << "'" << std::endl;
	else
		std::cout << "char: "<<  "Non displayable" << std::endl;
	
	if (r < INT_MIN || r > INT_MAX)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(r) << std::endl;

	std::cout << "float: "  << std::fixed << std::setprecision(1) << static_cast<float>(r) << "f" << std::endl;

	std::cout << "double: " << std::fixed << std::setprecision(1) << r << std::endl;
}

void ScalarConverter::byChar(const std::string& literal) {
	std::cout << "char: " << literal << std::endl;
	std::cout << "int: " << static_cast<int>(literal[1]) << std::endl;
	std::cout << "float: "  << std::fixed << std::setprecision(1) << static_cast<float>(literal[1]) << "f" << std::endl;
	std::cout << "double: "  << std::fixed << std::setprecision(1) << static_cast<double>(literal[1]) << std::endl;
}

void ScalarConverter::byFloat(const std::string& literal) {
	if (literal == "-inff" || literal == "+inff" || literal == "nan" || literal== "inff" 
		|| (static_cast<char>(std::strtof(literal.c_str(), NULL)) < 0 || static_cast<char>(std::strtof(literal.c_str(), NULL)) > 127))
		std::cout << "char: " << "impossible" << std::endl;
	else if (std::isprint(static_cast<char>(std::strtof(literal.c_str(), NULL))))
		std::cout << "char: " << "'" << static_cast<char>(std::strtof(literal.c_str(), NULL)) << "'" << std::endl;
	else
		std::cout << "char: "<<  "Non displayable" << std::endl;
	 
	if (std::strtod(literal.c_str(), NULL) < INT_MIN || std::strtod(literal.c_str(), NULL) > INT_MAX
		|| literal == "-inff" || literal == "+inff" || literal == "nan")
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(std::strtof(literal.c_str(), NULL)) << std::endl;

	if (literal == "-inff" || literal == "+inff")
		std::cout << "float: " << literal << std::endl;
	else if (literal == "nan")
		std::cout << "float: " << "nanf" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << std::strtof(literal.c_str(), NULL) << "f" << std::endl;

	if (literal ==  "inff") {
		std::cout << "double: " << "inf" << std::endl;
	} else if (literal == "-inff" || literal == "+inff" || literal == "nan")
		std::cout << "double: " << literal.substr(0, 4) << std::endl;
	else
		std::cout << "double: " << std::fixed << std::setprecision(1) << std::strtod(literal.c_str(), NULL) << std::endl;
}

void ScalarConverter::byDouble(const std::string& literal) {
	if (literal == "-inf" || literal == "+inf" || literal == "nan" || literal == "inf"
		|| (static_cast<char>(std::strtof(literal.c_str(), NULL)) < 0 || static_cast<char>(std::strtof(literal.c_str(), NULL)) > 127))
		std::cout << "char: " << "impossible" << std::endl;
	else if (std::isprint(static_cast<char>(std::strtod(literal.c_str(), NULL))))
		std::cout << "char: " << "'" << static_cast<char>(std::strtod(literal.c_str(), NULL)) << "'" << std::endl;
	else 
		std::cout << "char: "<<  "Non displayable" << std::endl;
	
	if (std::strtod(literal.c_str(), NULL) < INT_MIN || std::strtod(literal.c_str(), NULL) > INT_MAX
		|| literal == "-inf" || literal == "+inf" || literal == "nan")
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(std::strtof(literal.c_str(), NULL)) << std::endl;

	if (literal == "-inff" || literal == "+inff" || literal == "nan")
		std::cout << "float: " << literal << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << std::strtof(literal.c_str(), NULL) << "f" << std::endl;

	if (literal ==  "inff") {
		std::cout << "double: " << "inf" << std::endl;
	} else if (literal == "-inff" || literal == "+inff" || literal == "nan")
		std::cout << "double: " << literal.substr(0, 4) << std::endl;
	else
		std::cout << "double: " << std::fixed << std::setprecision(1) << std::strtod(literal.c_str(), NULL) << std::endl;
}


void ScalarConverter::convert(const std::string& literal) {
	switch (getType(literal)) {
		case CHAR:
			ScalarConverter::byChar(literal);
			break;
		case INT:
			ScalarConverter::byInt(literal);
			break;
		case FLOAT:
			ScalarConverter::byFloat(literal);
			break;
		case DOUBLE:
			ScalarConverter::byDouble(literal);
			break;
		default:
			std::cout << "Error: invalid input" << std::endl;
			break;
	}
}

int ScalarConverter::getType(const std::string& str) {
	if (isChar(str))
		return CHAR;
	if (isInt(str))
		return INT;
	if (isFloat(str))
		return FLOAT;
	if (isDouble(str))
		return DOUBLE;
	return INVALID;
}