#include "holberton.h"
/**
 * main - check if is lowercase.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if  ((c >= 'A' && c <='Z') || (c >= 'a' && c <= 'z'))
return 1;
return 0;
}
