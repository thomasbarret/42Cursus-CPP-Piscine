/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:17:30 by tbarret           #+#    #+#             */
/*   Updated: 2024/07/03 17:01:59 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_BUREAUCRAT_H
#define CPP_BUREAUCRAT_H

#include <iostream>
#include <stdint.h>

typedef struct Data {
	int a;
	std::string b;
	float c;
} t_Data;

class Serialization {
    public:
        Serialization();
        Serialization(const Serialization& other);
        Serialization& operator=(const Serialization& other);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
        ~Serialization();
        
};

#endif 