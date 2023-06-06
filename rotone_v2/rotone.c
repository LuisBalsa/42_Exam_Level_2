#include <unistd.h>

int	ascii(char c)
{
	if((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y' ))
		return 1;
	if(c == 'z' || c == 'Z')
		return -25;
	return 0;
}

int     main(int ac, char **av)
{
	int	i = 0;
        if (ac == 2)
        {
        	while(av[1][i])
			i += write(1, &(char){(char)(av[1][i] += ascii(av[1][i]))}, 1);
        }
        write(1, "\n", 1);
        return (0);
}
