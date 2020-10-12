//
// Created by Mari Ashley on 8/18/20.
//

#ifndef RTV1_H
#define RTV1_H
#include <stdio.h>
# include <stdlib.h>
#include <math.h>
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define WIN_H (300)
#define WIN_W (400)
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

typedef	struct	s_sphere
{
	t_coord	center;
	double	radius;
}				t_sphere;

typedef	struct	s_rtv
{
	t_coord		o;
	double		d;
	t_sphere	ball;
}				t_rtv;

#endif
