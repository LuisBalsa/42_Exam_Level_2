#include <stdlib.h>

int	space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int 	wordscount(char *str)
{
	int	count = 0;
	while(*str)
	{
		while(space(*str))
			*str++;
		if(*str)
			count++;
		while(!space(*str) && *str)
			*str++;
	}
	return (count);
}

char	*word(char *str, int *k)
{
	char	*word;
	int	i = 0;
	while (!space(str[*k + i]) && str[*k + i])
		i++;
	word = (char *)malloc(sizeof(char *) *(i + 1));
	word[i] = '\0';
	i = 0;
	while (!space(str[*k + i]) && str[*k + i])
	{
		word[i] = str[*k + i];
		i++;
	}
	*k += i;
	return (word);
}

char    **ft_split(char *str)
{
	char **array = (char **)malloc(sizeof(char **) * (wordscount(str) + 1));
	int	k = 0, i = 0;
	while(str[k])
	{
		while(space(str[k]))
			k++;
		if (str[k])
			array[i++] = word(str, &k);
	}
	array[i] = '\0';
	return (array);
}
