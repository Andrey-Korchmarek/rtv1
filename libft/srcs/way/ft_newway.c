/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newway.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:55:29 by mashley           #+#    #+#             */
/*   Updated: 2020/11/21 17:55:34 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_way	ft_newway3(double dx, double dy, double dz)
{
	t_way vector;

	vector.dx = dx;
	vector.dy = dy;
	vector.dz = dz;
	return (vector);
}
