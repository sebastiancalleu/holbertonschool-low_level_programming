#include <stdio.h>
#include <stdlib.h>
/**
 * main - this function multiply two numbers.
 * Return: is zero.
 * @argc: arg counter.
 * @argv: arg strings.
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
