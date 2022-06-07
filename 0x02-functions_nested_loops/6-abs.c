#include <stdio.h>

/**
 * _abs - prototype
 * @val: value
 * Return: integer
 */
int _abs(int val);

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

/**
 * _abs - find absolute value
 * @val: value
 * Return: absolute
 */
int _abs(int val)
{
	if (val <= 0)
		return (val * (-1));
	else
		return (val);
}
