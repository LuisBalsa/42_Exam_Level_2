#include <unistd.h>
int	repeat(char c)
{
	if(c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	if(c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	return 1;
}
int     main(int ac, char **av)
{
	int	i = 0;
	int	k;

        if (ac == 2)
        {
		while(av[1][i])
		{
			k = repeat(av[1][i]);
			while(k--)
				write(1, &av[1][i], 1);
			i++;
		}
        }
        write(1, "\n", 1);
        return (0);
}
