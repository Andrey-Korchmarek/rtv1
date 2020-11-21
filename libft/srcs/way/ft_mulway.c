/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mulway.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:54:50 by mashley           #+#    #+#             */
/*   Updated: 2020/11/21 17:54:56 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/bonus.h"

t_way	ft_mulway(t_way vector, double scalar)
{
	t_way	ret;

	ret.dx = vector.dx * scalar;
	ret.dy = vector.dy * scalar;
	ret.dz = vector.dz * scalar;
	return (ret);
}
