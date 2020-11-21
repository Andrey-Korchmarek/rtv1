/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_waylenght.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:57:13 by mashley           #+#    #+#             */
/*   Updated: 2020/11/21 17:57:15 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/bonus.h"

double	ft_waylenght(t_way vec)
{
	double	length;

	length = sqrt(pow(vec.dx, 2) + pow(vec.dy, 2) + pow(vec.dz, 2));
	return (length);
}
