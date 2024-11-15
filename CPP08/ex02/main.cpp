/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:19:06 by tbarret           #+#    #+#             */
/*   Updated: 2024/07/15 16:55:56 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/MutantStack.hpp"

#define BLUE    "\033[34m"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"

void test_basic_operations() {
    MutantStack<int> mstack;
    mstack.push(42);
    mstack.push(21);
    mstack.push(84);

    std::cout << GREEN << "Top element: " << RESET << mstack.top() << std::endl;  // Affiche 84
    mstack.pop();
    std::cout << GREEN << "New top element: " << RESET << mstack.top() << std::endl;  // Affiche 21
    std::cout << GREEN << "Stack size: " << RESET << mstack.size() << std::endl; // Affiche 2
}

void test_float_stack() {
    MutantStack<float> mstack;
    mstack.push(3.14f);
    mstack.push(2.71f);
    mstack.push(1.61f);

    std::cout << GREEN << "Top element: " << RESET << mstack.top() << std::endl;  // Affiche 1.61
    mstack.pop();
    std::cout << GREEN << "New top element: " << RESET << mstack.top() << std::endl;  // Affiche 2.71
    std::cout << GREEN << "Stack size: " << RESET << mstack.size() << std::endl; // Affiche 2
}

void test_stack_functions() {
    MutantStack<int> mstack;
    mstack.push(10);
    mstack.push(20);
    mstack.push(30);
    
    if (!mstack.empty()) {
        std::cout << "Stack is not empty" << RESET << std::endl;
    }

    mstack.pop();
    std::cout << GREEN << "Top after pop: " << RESET << mstack.top() << std::endl; // Affiche 20
    std::cout << GREEN << "Size after pop: " << RESET << mstack.size() << std::endl; // Affiche 2
}

void test_iterator() {
    MutantStack<int> mstack;
    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);

    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << GREEN << *it << RESET << " ";
    }
    std::cout << std::endl; // Affiche 1 2 3 4 5
}

void compare_with_list() {
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << GREEN << lst.back() << RESET << std::endl; // Affiche 17
    lst.pop_back();
    std::cout << GREEN << lst.size() << RESET << std::endl; // Affiche 1
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << GREEN << *it << RESET << std::endl;
    }
}



int main() {
    std::cout << BLUE << "Test basic operations:" << RESET << std::endl;
    test_basic_operations();
    
    std::cout << BLUE << "Test float stack:" << RESET << std::endl;
    test_float_stack();
    
    std::cout << BLUE << "Test stack functions:" << RESET << std::endl;
    test_stack_functions();
    
    std::cout << BLUE << "Test iterator:" << RESET << std::endl;
    test_iterator();
    
    std::cout << BLUE << "Compare with std::list:" << RESET << std::endl;
    compare_with_list();

    return 0;
}
