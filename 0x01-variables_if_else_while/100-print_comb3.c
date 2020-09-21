#include <stdio.h>
/**
 * main - the start of all
 *
 * Return: the answer of all
*/
int main(void)
{
int a, b;
for (a = '0' ; a < '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
putchar(a);
putchar(b);
if ((a != '8') || (b != '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
