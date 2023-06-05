#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while(str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	int	len = ft_strlen(src);
	char	*str = (char *)malloc(sizeof(char *) * (len +1));
	if(!str)
		return (NULL);
	str[len] = '\0';
	while(len-- >= 0)
		str[len] = src[len];
	return (str);
}
