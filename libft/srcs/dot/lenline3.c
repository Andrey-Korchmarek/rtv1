//
// Created by Mari Ashley on 11/20/20.
//

#include "includes/bonus.h"

double	ft_lenline3(t_dot3 a, t_dot3 b)
{
	double x;
	double y;
	double z;

	x = pow((a.x - b.x), 2);
	y = pow((a.y - b.y), 2);
	z = pow((a.z - b.z), 2);
	return (sqrt(x + y + z));
}