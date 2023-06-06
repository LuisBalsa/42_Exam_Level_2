#include <unistd.h>

int	isprime(int n)
{
	int	i = 2;
	if(n < 2)
		return 0;
	while(i * i <= n)
	{
		if(n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

void	ft_putnbr(int n)
{
	if(n > 9)
		ft_putnbr(n / 10);
	n = n % 10 + '0';
	write(1, &n, 1);
}

int	ft_atoi(char *str)
{
	int	n = 0;
	while(*str)
		n = n * 10 + *str++ - '0';
	return (n);
}

int     main(int ac, char **av)
{
	int	nbr = 0, sum = 0, i = 0;
        if (ac == 2)
        {
        	nbr = ft_atoi(av[1]);
		while(i <= nbr)
		{
			if(isprime(i))
				sum += i;
			i++;
		}
		nbr = sum;
        }
        ft_putnbr(nbr);
        write(1, "\n", 1);
        return (0);
}
