#include <stdio.h>
/**
 * main - this is the start of all
 *
 * Return: this is the finish of all
*/
int main(void)
{
int a, b, c;
for (a = '0' ; a < '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
for (b = b + 1; c <= '9'; c++)
{
putchar(a);
putchar(b);
putchar(c);
if ((a != '7') || (b != '8') || (c != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
