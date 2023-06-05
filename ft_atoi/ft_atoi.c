int	ft_atoi(const char *str)
{
	int	nbr = 0;
	int	sgn = 1;

	while(*str == 32 || (*str >= 9 && *str <= 13))
		*str++;
	sgn -= 2*(*str == '-');
	if (*str == '-' || *str == '+')
		*str++;
	while(*str >= '0' && *str <= '9')
		nbr = nbr * 10 + *str++ - '0';
	return (nbr * sgn);
}
