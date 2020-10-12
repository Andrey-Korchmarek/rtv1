#include "includes/rtv1.h"

t_coord	win_to_point(int i, int j, int d)
{
	double x;
	double y;
	double z;

	x = WIN_W / 2 + i;
	y = WIN_H / 2 - j;
	z = d;
	return ((t_coord){x, y, z});
}

double	scalar_product(t_vector a, t_vector b)
{
	double x;
	double y;
	double z;

	x = fabs(a.end.x - a.beg.x) * fabs(b.end.x - b.beg.x);
	y = fabs(a.end.y - a.beg.y) * fabs(b.end.y - b.beg.y);
	z = fabs(a.end.z - a.beg.z) * fabs(b.end.z - b.beg.z);
	return (x + y + z);
}

double	scalar_square(t_vector v)
{
	return (scalar_product(v, v));
}

void	change_pixel(t_rtv *data, int *pix, t_coord point)
{
	double a;
	double b;
	double c;
	double discr;
	double r;

	a = scalar_square((t_vector){data->o, point});
	b = 2 * scalar_product((t_vector){data->ball.center, data->o}, (t_vector){data->o, point});
	r = data->ball.radius;
	c = scalar_square((t_vector){data->ball.center, data->o}) - r * r;
	if ((discr = pow(b, 2) - 4 * a * c) < 0)
		return ;
	else if (discr == 0)
	{
		*pix = -(b / (2 * a));
		return ;
	}
	else
		*pix = MIN((-b + sqrt(discr)) / (2 * a), (-b - sqrt(discr)) / (2 * a));
}

int	**get_window(t_rtv *data)
{
	int **scene;
	int i;
	int j;

	scene = (int**) malloc(sizeof(int) * WIN_SIZE);
	i = 0;
	while (i < WIN_W)
	{
		scene[i] = (int*)malloc(sizeof(int) * WIN_H);
		j = 0;
		while (j < WIN_H)
		{
			scene[i][j] = 0xFFFFFF;
			change_pixel(data, &scene[i][j], win_to_point(i, j, data->d));
			j++;
		}
		i++;
	}
	return (scene);
}

void	set_default(t_rtv *data)
{
	data->o = (t_coord){0, 0 , 0};
	data->d = 20;
	data->ball.center = (t_coord){0, 0 , 40};
	data->ball.radius = 5;
	return ;
}

int	main(void)
{
	t_rtv	*data;
	int		**scene;

	data = (t_rtv*)malloc(sizeof(t_rtv));
	set_default(data);
	scene = get_window(data);
	return (0);
}