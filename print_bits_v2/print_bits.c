#include <unistd.h>

void    print_bits(unsigned char octet)
{
	int	c = 0b10000000;
	int     i;
	while(c)
	{
		i = ((octet & c) > 0) + '0';
		write(1, &i, 1);
		c = c >> 1;
	}
}

/*int main(void)
{
	print_bits(255);
	write(1, "\n" ,1);
	print_bits(128);
	write(1, "\n" ,1);
	print_bits(2);
	write(1, "\n" ,1);
	return 0;
}*/
