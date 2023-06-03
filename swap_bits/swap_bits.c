unsigned char	swap_bits(unsigned char octet)
{
	unsigned char nibble = octet << 4;
	octet = (octet >> 4) | nibble;
	return (octet);
}
