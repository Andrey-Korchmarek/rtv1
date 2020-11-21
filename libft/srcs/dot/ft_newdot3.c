/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newdot3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:34:09 by mashley           #+#    #+#             */
/*   Updated: 2020/11/21 18:34:11 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/bonus.h"

t_dot3	ft_newdot3(double x, double y, double z)
{
	t_dot3 point;

	point.x = x;
	point.y = y;
	point.z = z;
	return (point);
}
