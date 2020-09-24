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
for (b = 2; b < a; b++)
{
if ((a % b) == 0)
{
a =  a / b;
b = 1;
}
}
printf("%lu\n", a);
return (0);
}
