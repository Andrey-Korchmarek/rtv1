//
// Created by Mari Ashley on 12/15/20.
//

#include "rtv1.h"

static double	ft_scpway_square(t_way v)
{
	return (ft_scpway(v, v));
}

double	sphere_intersection(t_obj *obj, t_ray *ray)
{
	t_equation	*roots;
	double		a;
	double		b;
	double		c;

	a = ft_scpway_square(ray->dir);
	b = 2 * ft_scpway(ft_wayfromdots(obj->center, ray->pov), ray->dir);
	c = ft_scpway_square(ft_wayfromdots(obj->center, ray->pov)) -
		pow(obj->radius, 2);
	roots = ft_quadratic(a, b, c);
	if (roots->number == 2)
	{
		if (roots->roots[0] >= 1 && roots->roots[1] >= 1)
			return (MIN(roots->roots[0], roots->roots[1]) - 1);
		else if (roots->roots[0] >= 1 || roots->roots[1] >= 1)
			return (MAX(roots->roots[0], roots->roots[1]) - 1);
	}
	else if (roots->number == 1)
		return ((*roots->roots - 1));
	else
	{
		return (roots->roots[1]);
	}
	return (INFINITY);
}
