#include <stdio.h>
#include <stdlib.h>
/**
 * main - this program prints the minimum number of coins to make change.
 * Return: 0 if it is succesfull.
 * @argc: arg counter.
 * @argv: arg strings.
 */
int main(int argc, char *argv[])
{
	int a, b, c, d, e, f, g, h, i, j, sum;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		if (a > 0)
		{
			b = a / 25;
			c = a % 25;
			d = c / 10;
			e = c % 10;
			f = e / 5;
			g = e % 5;
			h = g / 2;
			i = g % 2;
			j = i / 1;
			sum = b + d + f + h + j;
			printf("%d\n", sum);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
