/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:57:27 by mashley           #+#    #+#             */
/*   Updated: 2020/08/05 14:57:31 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_BONUS_H
# define FDF_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>
# include <math.h>

# include "libft.h"

# define SHRINKER ( 1.247 )

typedef struct	s_dot3
{
	double	x;
	double	y;
	double	z;
}				t_dot3;

typedef struct	s_way
{
	double	dx;
	double	dy;
	double	dz;
}				t_way;

size_t	ft_shrinking_gap(size_t gap);
double	ft_discriminant(double a, double b, double c);

#endif
