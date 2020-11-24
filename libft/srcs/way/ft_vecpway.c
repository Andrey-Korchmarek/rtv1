/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecpway.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:56:34 by mashley           #+#    #+#             */
/*   Updated: 2020/11/21 17:56:37 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_way	ft_vecpway(t_way a, t_way b)
{
	t_way c;

	c.dx = a.dy * b.dz - a.dz * b.dy;
	c.dy = a.dz * b.dx - a.dx * b.dz;
	c.dz = a.dx * b.dy - a.dy * b.dx;
	return (c);
}
