/**
 * _strspn - something
 * @s: char input
 * @accept: char input
 * Return: unsigned int val
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			}
		}
	}
	return (j);
}
