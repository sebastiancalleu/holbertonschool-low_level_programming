#include "holberton.h"
/**
 * _isalpha - check if is a alphabetic character.
 *@c: input variable
 * Return: 1 if it is a alphabetic character.
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
return (0);
}
