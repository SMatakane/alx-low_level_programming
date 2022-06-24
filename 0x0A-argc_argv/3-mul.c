#include <stdio.h>
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
		mul = argv[1] * argv[2];
		printf("%d\n", mul);
	}
	else
		print("Error\n");
	return (0);
}
