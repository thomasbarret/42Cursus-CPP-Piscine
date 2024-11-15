/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:11 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/11 13:31:23 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_AAnimal_H
#define CPP_AAnimal_H

#include "WrongAAnimal.hpp"

class AAnimal {
    protected:
		    std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual void makeSound(void) const = 0;
        std::string getType(void) const;
        virtual ~AAnimal();
        
};

#endif
