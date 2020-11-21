/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_dot3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:33:02 by mashley           #+#    #+#             */
/*   Updated: 2020/11/21 18:33:07 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/bonus.h"

void	ft_change_dot(t_dot3 *point, double x, double y, double z)
{
	point->x = x;
	point->y = y;
	point->z = z;
}
