/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:19:06 by tbarret           #+#    #+#             */
/*   Updated: 2024/07/05 17:00:21 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Template/easyfind.hpp"


int main(void)
{
	std::vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	try
	{
		std::vector<int>::iterator it = easyfind(v, 5);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::vector<int>::iterator it = easyfind(v, 10);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}