#include "includes/rtv1.h"

t_coord	wtp(int i, int j, int d)
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

//double	scalar_square(t_vector v)
//{
//	return (scalar_product(v, v));
//}

/*
void	change_pixel(t_rtv *data, int *pix, t_vector d, t_vector oc)
{
	double a;
	double b;
	double c;
	double discr;
	double r;

	a = scalar_square((t_vector){data->o, data->d});
	b = 2 * scalar_product((t_vector){data->o, data->ball.center},
		(t_vector){data->o, data->d});
	r = data->ball.radius;
	c = scalar_square((t_vector){data->o, data->ball.center}) - r * r;
	discr = pow(b, 2) - 4 * a * c;
//	printf("%.1f ", discr);
	if ((int)discr < 0)
		return ;
	else if ((int)discr == 0)
	{
		*pix = (int)(-(b / (2 * a)));
		return ;
	}
	else
		*pix = (int)(MIN((-b + sqrt(discr)) / (2 * a), (-b - sqrt(discr)) /
		(2 * a)));
}
*/


double	ft_scpway_square(t_way v)
{
	return (ft_scpway(v, v));
}

void	change_color(double distance, t_equation *roots, int *color)
{
	if (roots->number == 0)
		return ;
	else if (roots->number == 1)
	{
		if (roots->roots[0] < 1)
			return ;
		*color = (int)floor(distance * (roots->roots[0] - 1));
	}
	else
	{
		if (roots->roots[0] < 1 && roots->roots[1] < 1)
			return ;
		else if (roots->roots[0] < 1 || roots->roots[1] < 1)
			*color = (int)floor(distance * (MAX(roots->roots[0],
					roots->roots[1]) - 1));
		else
			*color = (int)floor(distance * (MIN(roots->roots[0],
					roots->roots[1]) - 1));
	}
}

void	change_pixel2(t_rtv *data, t_dot3 pix, int *color)
{
	t_equation	*roots;
	double		a;
	double		b;
	double		c;

	a = ft_scpway_square(ft_wayfromdots(data->o, pix));
	b = 2 * ft_scpway(ft_wayfromdots(data->ball.center,data->o),
				ft_wayfromdots(data->o, pix));
	c = ft_scpway_square(ft_wayfromdots(data->ball.center,data->o)) -
			pow(data->ball.radius, 2);
	roots = ft_quadratic(a, b, c);
	change_color(ft_lenline3(data->o, pix), roots, color);
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
//			tmp1 = (t_vector){wtp(i, j, 0), wtp(i, j, 1)};
//			tmp2 = (t_vector){data->ball.center, wtp(i, j, 0)};
//			change_pixel(data, &scene[i][j], tmp1, tmp2);
			change_pixel2(data, ft_newdot3(1, 1, 1), &scene[i][j]);
			j++;
		}
		i++;
	}
	return (scene);
}

void	ft_test_print(int **scene)
{
	int i = 0;
	int j;
	while (i < WIN_W)
	{
		j = 0;
		while (j < WIN_H)
		{
			printf("%3d ", scene[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void	set_default(t_rtv *data)
{
	data->o = ft_newdot3(0, 0, 0);
	data->d = (t_coord){0, 0 , 0};
	data->ball.center = ft_newdot3(0, 0 , 10);
	data->ball.radius = 3;
	return ;
}

int	main(void)
{
	t_rtv	*data;
	int		**scene;

	data = (t_rtv*)malloc(sizeof(t_rtv));
	set_default(data);
	scene = get_window(data);
	ft_test_print(scene);
	return (0);
}
