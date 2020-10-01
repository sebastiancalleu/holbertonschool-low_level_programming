#include "holberton.h"
/**
 * _strcmp - this function compares two strings.
 * @s1: string input.
 * @s2: string input.
 * Return: is the integer.
 */
int _strcmp(char *s1, char *s2)
{
int a, b;
b = 0;
for (a = 0; s1[a] || s2[a]; a++)
{
if (s1[a] != s2[a])
{
b = s1[a] - s2[a];
break;
}
else
{
}
}
return (b);
}
