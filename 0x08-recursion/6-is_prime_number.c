#include "holberton.h"
/**
 * acumulation - this function acumulate an integer
 * @n: is the number to check.
 * @a: is the accumulation number.
 * Return: is the result.
 */
int acumulation(int n, int a)
{
	if (n == 2)
	{
		return (0);
	}
	if (n % a == 0)
	{
		if (a != n)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		a++;
		return (acumulation(n, a));
	}
}
/**
 * is_prime_number - this function test if a number is prime or not.
 * @n: number.
 * Return: 1 if is prime or 0 if it's no prime.
 *
 */
int is_prime_number(int n)
{
	int a;

	a = 2;
	if (n > 1)
	{
		return (acumulation(n, a));
	}
	else
	{
		return (0);
}
}
