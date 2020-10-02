#include "holberton.h"
/**
 * rot13 - transform a string to a rot13,  ithink
 * @s: input string.
 * Return: the leet string.
 */
char *rot13(char *s)
{
int a, b;
char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (b = 0; s[b]; b++)
{
for (a = 0; l[a]; a++)
{
if (s[b] == l[a])
{
s[b] = n[a];
break;
}
}
}
return (s);
}
