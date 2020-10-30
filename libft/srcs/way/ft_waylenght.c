#include "includes/bonus.h"

double	ft_waylenght(t_way vec)
{
	double	length;

	length = sqrt(pow(vec.dx, 2) + pow(vec.dy, 2) + pow(vec.dz, 2));
	return (length);
}
