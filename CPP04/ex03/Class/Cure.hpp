/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:14:28 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/11 18:14:44 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_CURE_H
#define CPP_CURE_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria {
	private:
		std::string _type;
	public:
		Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);
		AMateria* clone() const;
		void use(ICharacter& target);
		~Cure();
};



#endif