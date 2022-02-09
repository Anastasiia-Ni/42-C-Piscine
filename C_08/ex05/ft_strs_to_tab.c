#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}

char	*ft_strdup(char *src)
{
	int i;
	char *dest;
	int l;

	i = 0;
	l = ft_strlen(src);
	if ((dest = (char *)malloc(l * sizeof(char) + 1)) == NULL)
		return (0);
	while (src[i] != '\0')
	{
			dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	struct s_stock_str *array;
	int size;

	size = ac + 1;
	i = 0;
	if (!(array = malloc(size * sizeof(struct s_stock_str))))
		return (NULL);
	while (i < (size - 1))
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i] = (struct s_stock_str){0, 0, 0};
	return (array);
}


