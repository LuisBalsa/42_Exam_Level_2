#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int n1, n2, i = 1, com;

	if (ac == 3)
	{
		n1 = atoi(av[1]);
		n2 = atoi(av[2]);
		while (i <= n1 && i <=n2)
		{
			if (n1 % i == 0 && n2 % i == 0)
				com = i;
			i++;
		}
		printf("%d", com);
	}
	printf("\n");
	return(0);
}
