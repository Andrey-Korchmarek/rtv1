#include "includes/bonus.h"

t_way	ft_sumway(t_way v1, t_way v2)
{
	t_way result;

	result.dx = v1.dx + v2.dx;
	result.dy = v1.dy + v2.dy;
	result.dz = v1.dz + v2.dz;
	return(result);
}
