/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:25 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/08 16:13:43 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Fixed.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

void testComparisonOperators(const Fixed& a, const Fixed& b) {
    std::cout << BLUE << "Testing comparison operators" << RESET << std::endl;
    std::cout << "a: " << a << ", b: " << b << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << std::endl;
}

void testArithmeticOperators(const Fixed& a, const Fixed& b) {
    std::cout << MAGENTA << "Testing arithmetic operators" << RESET << std::endl;
    std::cout << "a: " << a << ", b: " << b << std::endl;
    std::cout << "a + b: " << (a + b) << std::endl;
    std::cout << "a - b: " << (a - b) << std::endl;
    std::cout << "a * b: " << (a * b) << std::endl;
    std::cout << "a / b: " << (a / b) << std::endl;
    std::cout << std::endl;
}

void testIncrementDecrementOperators(Fixed a) {
    std::cout << CYAN << "Testing increment and decrement operators" << RESET << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "--a: " << --a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "a--: " << a-- << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << std::endl;
}

void testMinMaxFunctions(const Fixed& a, const Fixed& b) {
    std::cout << YELLOW << "Testing min and max functions" << RESET << std::endl;
    std::cout << "a: " << a << ", b: " << b << std::endl;
    std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
    std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
    std::cout << std::endl;
}

int main() {
    Fixed a(2.05f);
    Fixed b(5.00f);

    testComparisonOperators(a, b);
    testArithmeticOperators(a, b);
    testIncrementDecrementOperators(a);
    testMinMaxFunctions(a, b);

    return 0;
}
