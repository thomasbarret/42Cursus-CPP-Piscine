/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:23:40 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/24 19:25:06 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Bureaucrat.hpp"
#include "./Class/ShrubberyCreationForm.hpp"
#include "./Class/RobotomyRequestForm.hpp"
#include "./Class/PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat bob("Bob", 1);
        Bureaucrat alice("Alice", 150);

        ShrubberyCreationForm shrubbery("home");
        RobotomyRequestForm robotomy("office");
        PresidentialPardonForm pardon("criminal");

        bob.signForm(shrubbery);
        bob.executeForm(shrubbery);

        bob.signForm(robotomy);
        bob.executeForm(robotomy);

        bob.signForm(pardon);
        bob.executeForm(pardon);
        
        alice.signForm(shrubbery); // fail
        alice.executeForm(shrubbery); // fail

    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
