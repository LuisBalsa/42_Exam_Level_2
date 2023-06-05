#include <unistd.h>

int	ascii(char c, int l)
{
	if(!l && (c >= 'a' && c <= 'z'))
		return (-32);
	if(l && (c >= 'A' && c <= 'Z'))
		return (32);
	return 0;
}

int     main(int ac, char **av)
{
	int	i;
	int	k = 1;
        if (ac > 1)
        {
		while(av[k])
		{
			i = 0;
			while(av[k][i])
			{
				if(i == 0)
					av[k][i] += ascii(av[k][i], 0);
				else if (av[k][i - 1] == ' ')
					av[k][i] += ascii(av[k][i], 0);
				else
					av[k][i] += ascii(av[k][i], 1);
				write(1, &av[k][i], 1);
				i++;
			}
       			write(1, "\n", 1);
			k++;
		}
        }
	else
       		write(1, "\n", 1);
        return (0);
}
