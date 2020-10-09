#include <stdio.h>
/**
 * main - this program prints the arguments.
 * Return: is 0.
 * @argc: arg counter.
 * @argv: arg strings.
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
