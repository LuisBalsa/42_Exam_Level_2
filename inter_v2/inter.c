#include <unistd.h>

int	duplicate(char *str, char c, int n)
{
	int	i = 0;
	while(i < n)
		if(str[i++] == c)
			return 1;
	return 0;
}

char	*ft_strchr(char *str, char c)
{
	while(*str)
	{
		if(*str == c)
			return (str);
		str++;
	}
	return (NULL);
}

int     main(int ac, char **av)
{
	int	i = 0;
        if (ac == 3)
        {
		while(av[1][i])
		{
			if(!duplicate(av[1], av[1][i], i) && ft_strchr(av[2], av[1][i]))
				write(1, &av[1][i], 1);
			i++;
		}
        }
        write(1, "\n", 1);
        return (0);
}
