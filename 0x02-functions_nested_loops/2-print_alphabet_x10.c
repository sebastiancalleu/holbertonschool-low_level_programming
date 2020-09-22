#include "holberton.h"
/**
 * entry - main, this is going to print the alphabet
 *
 * retunr: is 0 
 */
void print_alphabet_x10(void)
{
	int a, b;
for(b = 1; b <= 10; b++)
{
for(a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
