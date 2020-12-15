//
// Created by Mari Ashley on 8/18/20.
//

#ifndef RTV1_H
#define RTV1_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "../libft/includes/libft.h"
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define WIN_H (30)
#define WIN_W (40)
#define WIN_SIZE (WIN_H * WIN_W)

typedef struct		s_coord
{
	double	x;
	double	y;
	double	z;
}			t_coord;

typedef	struct	s_vector
{
	t_coord	beg;
	t_coord	end;
}				t_vector;

typedef struct	s_ray
{
	t_dot3			pov;
	t_way			dir;
	double			distance;
	t_way			normal;
}				t_ray;

typedef	struct	s_sphere
{
	t_dot3	center;
	double	radius;
}				t_sphere;

typedef struct	s_obj
{
	char	*name;
	unsigned int	color;
	t_dot3	center;
	double	radius;

}				t_obj;

typedef	struct	s_rtv
{
	t_dot3		o;
	t_coord		d;
	t_sphere	ball;
}				t_rtv;

#endif
