#include "3-calc.h"
#include <stdio.h>
/**
 * main - this function makes operations.
 * @argv: arg string.
 * @argc: arg counter.
 * Return: 0 if it is succesfull.
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	c = (*get_op_func(argv[2]))(a, b);
	printf("%d\n", c);
	return (0);
}
