#include "holberton.h"
/**
 * _pow_recursion - this function makes exponential operations
 * @x: number.
 * @y: exponential.
 * Return: the result.
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		y--;
		x = x * _pow_recursion(x, y);
	}
	else
	{
		if (y < 0)
		{
			return (-1);
		}
		else
		{
			return (1);
		}
	}
	return (x);
}
