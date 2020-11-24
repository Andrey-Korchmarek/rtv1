/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sumway.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:56:15 by mashley           #+#    #+#             */
/*   Updated: 2020/11/21 17:56:18 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_way	ft_sumway(t_way v1, t_way v2)
{
	t_way result;

	result.dx = v1.dx + v2.dx;
	result.dy = v1.dy + v2.dy;
	result.dz = v1.dz + v2.dz;
	return (result);
}
