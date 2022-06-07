#include <stdio.h>

/**
 * main - main
 * Return: 0
 */

int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	for (; i < (int) sizeof(ch); i++)
		putchar(ch[i]);
	putchar('\n');
	return (0);
}
