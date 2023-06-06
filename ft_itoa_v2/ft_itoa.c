#include <stdlib.h>
#include <stdio.h>

int	nbrlen(int n)
{
	int	i = !n;
	while(n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int	sign = nbr < 0;
	int	len = nbrlen(nbr) + sign;
	char	*str = (char *)malloc(sizeof(char *) * (len + 1));
	if(!str)
		return NULL;
	str[len] = '\0';
	if(sign)
	{
		*str = '-';
		str[--len] = -(nbr % 10) + '0';
		nbr = -(nbr / 10);
	}
	while(len-- - sign)
	{
		str[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

/*int	main(void)
{
	int	i = -10;
	char	*str;

	while(i < 15)
	{
		str = ft_itoa(i);
		printf("%-3d%4s|\n", i, str);
		free(str);
		i++;
	}
}*/
