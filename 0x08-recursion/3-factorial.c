#include "holberton.h"
/**
 * factorial - this functions return the factorial of a number.
 * @n: number.
 * Return: factorial.
 */
int factorial(int n)
{
	if (n > 0)
	{
		n = n * factorial(n - 1);
			}
	else 
	{
		if (n < 0) 
		{
			return (-1);
		}
		else 
		{
			return (1);
		}
	}
	return (n);
}
