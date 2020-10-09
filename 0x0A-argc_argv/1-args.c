#include <stdio.h>
/**
 * main - this function prints the number of arguments
 * Return: is zero.
 * @argc: arg counter.
 * @argv: arg strings.
 */
int main(int argc, char *argv[])
{
	char a;

	a = *argv[0];
	a = a + 1;
	printf("%d\n", argc - 1);
	return (0);
}
