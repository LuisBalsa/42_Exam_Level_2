#include <unistd.h>

void	ft_hex(int nbr)
{
	char	*str = "0123456789abcdef";
	if(nbr >= 16)
		ft_hex(nbr / 16);
	write(1, &str[nbr % 16], 1);
}

int	ft_atoui(char *str)
{
	int	nbr = 0;
	while(*str)
		nbr = nbr * 10 + *str++ - '0';
	return (nbr);
}

int	main(int ac, char **av)
{
	int	nbr = 0;

	if (ac == 2)
	{
		nbr = ft_atoui(av[1]);
		ft_hex(nbr);
	}
	write(1, "\n", 1);
	return (0);
}
