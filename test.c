#include <stdio.h>

typedef struct	s_equation
{
	int		number;
	double	*roots;
}				t_equation;

t_equation func(double *arg)
{
	t_equation equ;
	if (0)
	{
		equ.number = 0;
		equ.roots = NULL;
	}
	else
	{
		equ.number = 2;
		equ.roots = (double*){2, 3};
	}
	return (equ);
}

int main(void)
{
	double *arg = (double*){1, 0, 1};
	printf("%d %f", func());
	return 0;
}

/*
 * Функция точек пересечения луча и объекта
 * Для каждого луча вычисляем все точки перечисления луча и объектов сцены
 * Для каждого луча вычисляем массив таких t, что О + t * OV это точка
 * пересечения, потом выбираем минимальное t больше 1
 * Все функции для точек
 * Все функции для векторов
 */