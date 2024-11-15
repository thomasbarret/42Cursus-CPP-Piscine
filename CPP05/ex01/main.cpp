/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:25 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/24 17:07:17 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Bureaucrat.hpp"
#include "./Class/Form.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 2);
        std::cout << bob << std::endl;

        Form form1("Form1", 1, 5);
        std::cout << form1 << std::endl;

        bob.signForm(form1);
        std::cout << form1 << std::endl;

        bob.incrementGrade();
        std::cout << bob << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Bureaucrat jim("Jim", 149);
        std::cout << jim << std::endl;

        Form form2("Form2", 150, 150);
        std::cout << form2 << std::endl;

        jim.signForm(form2);
        std::cout << form2 << std::endl;

        jim.decrementGrade();
        std::cout << jim << std::endl;

        Form form3("Form2", 150, 200);;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}