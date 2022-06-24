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
	int sum = 0;
	int i = 1;

	if (argc == 1)
		return (0);
	while (i < argc)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
			break;
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
