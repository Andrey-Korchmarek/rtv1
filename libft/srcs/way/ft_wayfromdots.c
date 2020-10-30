#include "includes/bonus.h"

t_way ft_wayfromdots(t_dot3 beg, t_dot3 end)
{
	t_way vector;

	vector.dx = end.x - beg.x;
	vector.dy = end.y - beg.y;
	vector.dz = end.z - beg.z;
	return (vector);
}
