#include <unistd.h>

int	ascii(char c)
{
	if(c >= 'a' && c <= 'z')
		return (-32);
	if(c >= 'A' && c <= 'Z')
		return (32);
	return (0);
}

int     main(int ac, char **av)
{
	int	i = 0;
        if (ac == 2)
        {
		while(av[1][i])
		{
			av[1][i] += ascii(av[1][i]);
			i += write(1, &av[1][i], 1);
		}
        }
        write(1, "\n", 1);
        return (0);
}
