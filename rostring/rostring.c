#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int flag = 0;
	int flag2 = 0;

	if (ac > 1)
	{
		while(av[1][i])
		{
			while(av[1][i] == ' ')
				i++;
			if (flag > 1)
				write(1, " ", 1);
			while(av[1][i] && av[1][i] != ' ' && !flag)
				i++;
			flag = 1;
			while(av[1][i] && av[1][i] != ' ')
				flag += write(1, &av[1][i++], 1);
			if (flag2)
				break ;
			if (!av[1][i])
				i = flag2++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
