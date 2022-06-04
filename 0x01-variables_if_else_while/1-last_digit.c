#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Test sign
 * Return: 0
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("Last digit of %i is %i %s\n", n, last, "and is greater than 5");
	if (last == 0)
		printf("Last digit of %i is %i %s\n", n, last, "and is 0");
	if (last < 6 && last != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	return (0);
}
