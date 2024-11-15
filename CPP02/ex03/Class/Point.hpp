/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:20:17 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/08 17:23:33 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point {
private:
    Fixed _x;
    Fixed _y;

public:
    Point();
    Point(float const x, float const y);
    Point(Point const &other);
    Point &operator=(Point const &other);

    Fixed getX() const;
    Fixed getY() const;
	~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif 
