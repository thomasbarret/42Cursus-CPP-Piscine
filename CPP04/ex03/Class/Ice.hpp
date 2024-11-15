/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:05:32 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/11 18:10:52 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_ICE_H
#define CPP_ICE_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria {
	private:
		std::string _type;
	public:
		Ice();
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);
		AMateria* clone() const;
		void use(ICharacter& target);
		~Ice();
};

#endif