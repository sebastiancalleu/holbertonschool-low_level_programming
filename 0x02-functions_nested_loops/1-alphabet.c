#include "holberton.h"
/**
 * entry - main, this is going to print the alphabet
 *
 * retunr: is 0 
 */
void print_alphabet(void)
{
int a;
for(a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
