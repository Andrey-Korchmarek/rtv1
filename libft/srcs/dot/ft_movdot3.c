#include "includes/bonus.h"

t_dot3	ft_movdot3(t_dot3 point, t_way vector)
{
	t_dot3	result;

	result.x = point.x + vector.dx;
	result.y = point.y + vector.dy;
	result.z = point.z + vector.dz;
	return (result);
}
