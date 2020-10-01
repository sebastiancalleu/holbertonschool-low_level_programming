#include "holberton.h"
/**
 * leet - transform a string to a leet
 * @s: input string.
 * Return: the leet string.
 */
char *leet(char *s)
{
int a, b;
char let[] = "aAeEoOtTlL";
char num[] = "4433007711";
for (b = 0; s[b]; b++)
for (a = 0; let[a]; a++)
{
if (s[b] == let[a])
{
s[b] = num[a];
}
else
{
}
}
return (s);
}
