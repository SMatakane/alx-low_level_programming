/**
 * _strpbrk - something
 * @s: char input
 * @accept: char input
 * Return: char val
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s++)
	{
		for (; accept[j] != '\0'; j++)
			if (*s == accept[j])
				return (s);
	}
	return (0);
}
