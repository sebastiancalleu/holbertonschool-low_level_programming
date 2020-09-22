#include "holberton.h"
/**
 * print_alphabet_x10 - this function prints ten times the alphabet
 */
void print_alphabet_x10(void)
{
int a, b;
for (b = 1; b <= 10; b++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
