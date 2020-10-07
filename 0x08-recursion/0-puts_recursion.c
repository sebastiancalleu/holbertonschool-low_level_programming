#include "holberton.h"
/**
 * _puts_recursion - this function print a string with recursion.
 * @s: input string.
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}
	else
	{
	_putchar('\n');
	}
}
