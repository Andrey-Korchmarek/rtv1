//
// Created by Mari Ashley on 8/18/20.
//

#ifndef RTV1_H
#define RTV1_H
#include <stdio.h>
#include <math.h>
#define WIN_H (300)
#define WIN_W (400)
#define WIN_SIZE (WIN_H * WIN_W)

typedef struct		s_coord
{
	double	x;
	double	y;
	double	z;
}			t_coord;

typedef	struct	s_sphere
{
	t_coord	center;
	double	radius;
}				t_sphere;

#endif
