#include <stdio.h>
/**
 * main - this function print the program name.
 * Return: is 0.
 * @argc: arg counter.
 * @argv: arg strings.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
