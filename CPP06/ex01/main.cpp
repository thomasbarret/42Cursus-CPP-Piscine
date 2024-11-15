/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:48:05 by tbarret           #+#    #+#             */
/*   Updated: 2024/07/03 16:48:47 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Serialization.hpp"


int main() {
    Data myData;
    myData.a = 42;
	myData.b = "Hello, World!";
	myData.c = 3.14f;

    uintptr_t raw = Serialization::serialize(&myData);
    Data* ptr = Serialization::deserialize(raw);

    if (ptr == &myData) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
    } else {
        std::cout << "Something went wrong." << std::endl;
    }

    return 0;
}