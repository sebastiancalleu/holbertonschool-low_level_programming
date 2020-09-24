#include "holberton.h"
/**
 * _isdigit - check if is a digit.
 *@c: input variable
 * Return: 1 if it is a alphabetic character.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
