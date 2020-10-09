#include "rtv1.h"

double	square_vector_lenght(t_coord start, t_coord end)
{
	return (pow((end.x - start.x), 2) + pow((end.y - start.y), 2) +
	pow((end.z - start.z), 2));
}

int	main(void)
{
	return (0);
}