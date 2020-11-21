//
// Created by Mari Ashley on 11/21/20.
//

#include "includes/bonus.h"

t_way ft_vecpway(t_way a, t_way b)
{
	t_way c;

	c.dx = a.dy * b.dz - a.dz * b.dy;
	c.dy = a.dz * b.dx - a.dx * b.dz;
	c.dz = a.dx * b.dy - a.dy * b.dx;
	return (c);
}