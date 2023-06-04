#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0, k = 0;

	if (ac == 2)
	{
		while(av[1][i])
			i++;
		while(i > 0)
		{
			while(av[1][i] != ' ' && i)
				i--;
			k = i--;
			if(av[1][k] == ' ')
				k++;
			while(av[1][k] && av[1][k] != ' ')
				write(1, &av[1][k++], 1);
			if(i >0)
				write(1, " ", 1);
		}

	}
	write(1, "\n", 1);
	return (0);
}
