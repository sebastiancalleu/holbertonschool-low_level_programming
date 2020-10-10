#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - this function prints the sum of the args.
 * Return: is zero.
 * @argc: arg counter.
 * @argv: arg strings.
 */
int main(int argc, char *argv[])
{
	int a, b;

	b = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		if (isdigit(*argv[a]))
		{
			b += atoi(argv[a]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
		printf("%d\n", b);
return (0);
}
