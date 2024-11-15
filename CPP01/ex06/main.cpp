/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:18:01 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/05 10:18:06 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Harl.hpp"

int main(int arg, char **argv) {
	Harl harl;

	if (arg == 2)
		harl.complain(argv[1]);
	else
		harl.complain("DEBUG");
	return (0);
}