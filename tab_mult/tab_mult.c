#include <unistd.h>

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	write(1, &(char){(char)(nbr % 10 + '0')}, 1);
}

int	ft_itoa(char *str)
{
	int	nbr = 0;
	while (*str)
		nbr = nbr * 10 + *str++ - '0';
	return (nbr);
}

int	main(int ac, char **av)
{
	int	nbr, i = 1;
	if (ac == 2)
	{
		nbr = ft_itoa(av[1]);
		while(i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
			
	}
	else
		write(1, "\n", 1);
	return (0);
}
