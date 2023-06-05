#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &(char){(char)(n % 10 + '0')}, 1);
}

int	isprime(int n)
{
	int	i = 2;

	if (n < 2)
		return 0;
	while (i <= n / 2)
		if (n % i++ == 0)
			return 0;
	return 1;
}

int	ft_atoi(char *str)
{
	int	nbr = 0;

	if (*str == '-')
		return 0;
	while(*str && (*str >= '0' && *str <= '9'))
		nbr = nbr * 10 + *str++ - '0';
	return (nbr);
}

int     main(int ac, char **av)
{
	int	i = 2;
	int	sum = 0;
	int	nbr = 0;

        if (ac == 2)
        {
		nbr = ft_atoi(av[1]);
		while(i <= nbr)
		{
			if (isprime(i))
				sum += i;
			i++;
		}
        }
		ft_putnbr(sum);
        	write(1, "\n", 1);
        return (0);
}
