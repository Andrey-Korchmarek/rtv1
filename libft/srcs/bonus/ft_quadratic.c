//
// Created by Mari Ashley on 11/19/20.
//

#include "includes/bonus.h"

t_equation2	*ft_quadratic(double a, double b, double c)
{
	t_equation2	*result;
	double		discr;
	double		root;
	double		roots[2];

	discr = b * b - 4 * a * c;
	if (discr < 0)
	{
		result->number = 0;
		result->roots = NULL;
	}
	else if (discr == 0)
	{
		root = -(b / (2 * a));
		result->number = 1;
		result->roots = &root;
	}
	else
	{
		roots[0] = (-b + sqrt(discr))/ (2 * a);
		roots[1] = (-b - sqrt(discr))/ (2 * a);
		result->number = 2;
		result->roots = roots;
	}
	return (result);
}