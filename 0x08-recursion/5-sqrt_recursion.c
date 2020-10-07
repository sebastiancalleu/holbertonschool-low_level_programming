#include "holberton.h"
/**
 * acumulation - this is a function to acumulate an integer
 * @a: the accumulation number.
 * @n: a copy of the number.
 * Return: the root.
 */
int acumulation(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a != n)
	{
		a++;
		return (acumulation(n, a));
	}
	return (a);
}
/**
 * _sqrt_recursion - this function finds the square root
 * @n: the number.
 * Return: the result.
 *
 *
 */
int _sqrt_recursion(int n)
{
	int a;

	a = 1;
		if (n < 1)
		{
			return (-1);
		}
		else
		{
			if (n == 0)
			{
			return (0);
			}
		}

		return (acumulation(n, a));
}
