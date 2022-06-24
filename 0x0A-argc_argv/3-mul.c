#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - starterpack lololol
 * @argc: integer
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	argc = argc - 1;
	if (argc == 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
