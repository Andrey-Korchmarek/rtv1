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

typedef struct	s_equation2
{
	int		number;
	double	*roots;
}				t_equation2;

size_t			ft_shrinking_gap(size_t gap);
t_dot3			ft_newdot3(double x, double y, double z);
void			ft_change_dot(t_dot3 *point, double x, double y, double z);
t_dot3			ft_movdot3(t_dot3 point, t_way vector);
double			ft_lenline3(t_dot3 a, t_dot3 b);
t_way			ft_newway3(double dx, double dy, double dz);
t_way			ft_mulway(t_way vector, double scalar);
double			ft_waylenght(t_way vec);
t_way			ft_wayfromdots(t_dot3 beg, t_dot3 end);
t_way			ft_vecpway(t_way a, t_way b);
t_way			ft_sumway(t_way v1, t_way v2);
double			ft_scpway(t_way v1, t_way v2);

#endif
