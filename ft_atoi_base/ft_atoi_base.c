int	ft_isdigit(char c, int base)
{
	char *base_l = "0123456789abcdef";
	char *base_u = "0123456789ABCDEF";
	while(base--)
	{
		if (c == base_l[base] || c == base_u[base])
			return (1);
	}
	return (0);
}

int	ascii(char c)
{
	if (c >= 'a')
		return ('a' - 10);
	if (c >= 'A')
		return ('A' - 10);
	if (c >= '0')
		return ('0');
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int sign = 1;
	int nbr = 0;

	while(*str == 32 || (9 <= *str && *str <= 13))
			*str++;
	sign -= 2*(*str == '-');
	if (*str == '-' || *str == '+')
		*str++;
	while(*str && ft_isdigit(*str, str_base))
		nbr = nbr * str_base + *str - ascii(*str++);
	return (nbr * sign);
}
