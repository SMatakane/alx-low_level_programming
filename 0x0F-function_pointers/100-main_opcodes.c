#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: meh
 * @argv: meh
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes, idx;
	int (*addr)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (idx = 0; idx < bytes; idx++)
	{
		opcode = (unsigned char *) addr;
		printf("%.2x", opcode);

		if (idx == bytes - 1)
			continue;
		printf(" ");
		addr++;
	}
	printf("\n");
	return (0);
}
