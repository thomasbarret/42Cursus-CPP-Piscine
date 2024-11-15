/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:53:15 by tbarret           #+#    #+#             */
/*   Updated: 2024/07/05 17:00:05 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_EASYFIND_H
#define CPP_EASYFIND_H

#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &data, int value) {
	typename T::iterator it = std::find(data.begin(), data.end(), value);
	if (it == data.end())
		throw std::runtime_error("Value not found");
	return it;
}

#endif