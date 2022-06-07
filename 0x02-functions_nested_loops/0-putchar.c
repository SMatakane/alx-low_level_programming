#include <stdio.h>

/**
 * main - main
 * Return: 0
 */

int main(void)
{
	char ch[9] = "_putchar";
	int i = 0;

	for (; i < 9; i++)
		putchar(ch[i]);
	putchar('\n');
	return (0);
}
