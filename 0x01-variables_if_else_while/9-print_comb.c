#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int a;
for (a = 0; a <= 9; ++a)
if (a <= 9)
{
putchar(a % 10 + '0');
if (a < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
