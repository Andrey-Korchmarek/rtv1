#include "includes/bonus.h"

double	ft_scpway(t_way v1, t_way v2)
{
	return (v1.dx * v2.dx + v1.dy * v2.dy + v1.dz * v2.dz);
}
