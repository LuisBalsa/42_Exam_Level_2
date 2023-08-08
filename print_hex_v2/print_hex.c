#include <unistd.h>

void	ft_puthex(int nbr)
{
	char *base = "0123456789abcdef";
	if(nbr >= 16)
		ft_puthex(nbr / 16);
	nbr = nbr % 16;
	write(1, &base[nbr], 1);
}

int	ft_atoui(char *str)
{
	int	nbr = 0;
	while(*str >= '0' && *str <= '9')
		nbr = nbr * 10 + *str++ - '0';
	return nbr;
}

int     main(int ac, char **av)
{
	int	nbr = 0;
        if (ac == 2)
        {
		nbr = ft_atoui(av[1]);
		ft_puthex(nbr);
        }
        write(1, "\n", 1);
        return (0);
}
