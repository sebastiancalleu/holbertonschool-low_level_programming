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
	int a, b, c;

	c = 0;
	for (a = 1; a < argc; a++)
	{
		if (isdigit(*argv[a]))
		{
			b = atoi(argv[a]);
			c += b;
		}
		else
		{
			printf("Error\n");
			break;
		}
	}
	if (a == argc)
	{
		printf("%d\n", c);
	}
return (0);
}
