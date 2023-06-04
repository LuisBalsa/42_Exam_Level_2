#include <stdio.h>
#include <stdlib.h>

int	calc(int nbr1, int nbr2, char c)
{
	if (c == '+')
		return(nbr1 + nbr2);
	if (c == '-')
		return(nbr1 - nbr2);
	if (c == '*')
		return(nbr1 * nbr2);
	if (c == '/')
		return(nbr1 / nbr2);
	if (c == '%')
		return(nbr1 % nbr2);
	return (0);
}

int	main(int ac, char **av)
{
	int	nbr1, nbr2;
	if (ac == 4)
	{
		nbr1 = atoi(av[1]);
		nbr2 = atoi(av[3]);
		printf("%d", calc(nbr1, nbr2, av[2][0]));
	}
	printf("\n");
	return (0);
}
