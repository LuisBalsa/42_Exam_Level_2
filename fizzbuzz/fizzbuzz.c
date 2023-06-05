#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &(char){(char)(n % 10 + '0')}, 1);
}

int	main(void)
{
	int i = 1;
	while(i <= 100)
	{
		if (i % 3 == 0)
			write(1, "fizz", 4);
		if (i % 5 == 0)
			write(1, "buzz", 4);
		if (i % 3 != 0 && i % 5 != 0)
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}
