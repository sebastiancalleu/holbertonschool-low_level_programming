#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int a;
char c;
for (a = 0; a <= 9; ++a)
putchar(a % 10 + '0');
for (c = 'a'; c <= 'f'; ++c)
putchar(c);
putchar('\n');
return (0);
}
