#include <stdlib.h>
#include <stdio.h>

int	isprime(int n)
{
	int	i = 2;
	
	if (n < 2)
		return (0);
	while(i * i <= n)
	{
		if (i * i == n)
			return (0);
		i++;
	}
	return (1);
}

int     main(int ac, char **av)
{
	int	n = 0;
	int	i = 2;
	int	flag = 0;

        if (ac == 2)
        {
		n = atoi(av[1]);
		while (n > 1)
		{
			while (isprime(i) && n % i == 0)
			{	
				if(flag)
					printf("*");
				flag = printf("%d", i);
				n /= i;
			}
			i++;
		}
        }
        printf("\n");
        return (0);
}
