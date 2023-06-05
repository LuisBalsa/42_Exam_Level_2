#include <stdio.h>
#include <stdlib.h>

int	isprime(int n)
{
	int	i = 2;
	if(n < 2)
		return 0;
	while (i <= n / 2)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int     main(int ac, char **av)
{
	int	nbr = 0;
	int	i = 2;
	int	flag = 0;
        if (ac == 2)
        {
		nbr = atoi(av[1]);
		while(i <= nbr)
		{
			while(isprime(i) && nbr % i == 0)
			{
				if(flag)
					printf("*");
				flag = printf("%d", i);
				nbr /= i;
			}
			i++;
		}
        }
        printf("\n");
        return (0);
}
