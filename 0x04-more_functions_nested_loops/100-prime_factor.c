#include <stdio.h>
/**
 * main - finds the largest factor number of 612852475143
 *
 * Return: is 0
 */
int main(void)
{
long a, b;
a = 612852475143;
if (a % 3 == 0)
{
b = a / 3;
printf("%lu\n", b);
}
return (0);
}
