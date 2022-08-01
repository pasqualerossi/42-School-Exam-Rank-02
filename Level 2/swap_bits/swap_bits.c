unsigned char	swap_bits(unsigned char c)
{
	return ((c >> 4) | (c << 4));
}
