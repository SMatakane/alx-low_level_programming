#include <stdio.h>
#include "main.h"
/**
 * natural - something
 * @n: size
 * Return: sum
 */
int natural(int n)
{
	int sum = 0;
	int i = 1;

	for (; i < n; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	return (sum);
}
