/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:11 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/10 16:24:54 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_WRONGAAnimal_H
#define CPP_WRONGAAnimal_H

#include <iostream>

class WrongAAnimal {
    protected:
		    std::string type;
    public:
        WrongAAnimal();
        WrongAAnimal(const WrongAAnimal& other);
        WrongAAnimal& operator=(const WrongAAnimal& other);
        void makeSound(void) const;
        std::string getType(void) const;
        ~WrongAAnimal();
        
};

#endif
