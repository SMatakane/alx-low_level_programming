/**
 * binary_to_uint - as the name says
 * @b: val
 * Return: as uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	unsigned int i;

	for (dec = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			dec = (dec << 1) | 1;
		else if (b[i] == '0')
			dec <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (dec);
}
