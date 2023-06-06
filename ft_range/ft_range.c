#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	i = 1 - 2*(end < start);
	int	len = (end - start) * i + 1;
	int	*array = (int *)malloc(sizeof(int *) * len);
	while(len--)
		array[len] = start + (len * i);
	return (array);
}
