#include <rtv1.h>

t_list	**parser_file(char *path)
{
	t_list		**ret;

	ret = NULL;
	if (!(ret = read_file(path)))
		return (NULL);
	return(ret);
}

void	read_obj(t_event *event, t_scene **scene, char argv[])
{
	t_list	**doc;

	doc = parser_file(argv);
}
