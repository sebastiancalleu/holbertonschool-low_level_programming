#include <stdio.h>
#include <stdlib.h>
/**
 * main - this function generates the opcode of his own.
 * @argc: arg counter.
 * @argv: arg string.
 * Return: is 0.
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
