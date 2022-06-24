#include <stdio.h>
/**
 * main - main
 * @argc: int
 * @argv: array
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc >= 1)
	{
		for (; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
