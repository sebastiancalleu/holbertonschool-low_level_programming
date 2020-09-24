#include "holberton.h"
/**
 * _isupper - check if is a alphabetic character.
 *@c: input variable
 * Return: 1 if it is a alphabetic character.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
