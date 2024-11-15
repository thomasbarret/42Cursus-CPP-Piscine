/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:32:03 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/08 17:12:37 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Class/Point.hpp"

Fixed area(Point const& a, Point const& b, Point const& c) {
    float rawArea = (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
                b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
                c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2;
    if (rawArea >= 0)
		return (rawArea);
	return (rawArea * -1);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed totalArea = area(a, b, c);
    Fixed area1 = area(point, b, c);
    Fixed area2 = area(point, a, c);
    Fixed area3 = area(point, a, b);

    if (area1 == Fixed(0) || area2 == Fixed(0) || area3 == Fixed(0))
        return false;
    else if (area1 + area2 + area3 == totalArea)
        return true;
    return false;
}
