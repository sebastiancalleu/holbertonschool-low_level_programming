#include "holberton.h"
/**
 *  print_most_numbers - this function print numbers.
 *
 *
 */
void print_most_numbers(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
if ((a != '2') && (a != '4'))
{
_putchar(a);
}
else
{
}
}
_putchar('\n');
}
