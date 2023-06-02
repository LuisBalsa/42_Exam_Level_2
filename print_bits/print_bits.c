#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 256;

	while (i >>= 1)
	{
		if (octet & i)
			write(1, "1" ,1);
		else
			write(1, "0" ,1);
	}
}
