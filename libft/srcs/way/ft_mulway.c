#include "includes/bonus.h"

t_way	ft_mulway(t_way vector, double scalar)
{
	t_way	ret;

	ret.dx = vector.dx * scalar;
	ret.dy = vector.dy * scalar;
	ret.dz = vector.dz * scalar;
	return (ret);
}
