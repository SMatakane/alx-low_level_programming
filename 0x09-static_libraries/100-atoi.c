#include "main.h"

int _atoi(char *s)
{
	int i = 0;
	int minus = -1;
	int result = 0;
	short boolean = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result *= minus;
	return (result);
}
