#include "holberton.h"
#include <stdio.h>
/**
 * set_string - this function set the value of a pointer to a char
 * @s: pointer.
 * @to: char.
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
