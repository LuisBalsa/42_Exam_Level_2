#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	if (argc == 3)
	{
		k = 0;
		i = 0;
		while (argv[2][i])
		{
			if (argv[2][i] == argv[1][k])
				k++;
			if (!argv[1][k])
			{
				write(1, "1", 1);
				break;
			}
			i++;
		}
		if (argv[1][k])
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
