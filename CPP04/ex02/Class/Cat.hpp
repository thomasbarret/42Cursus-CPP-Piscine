/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:11 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/12 19:03:32 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_CAT_H
#define CPP_CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
    private:
        Brain* _brain;
    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
		virtual void makeSound(void) const;
        Brain* getBrain(void) const;
        ~Cat();
};

#endif
