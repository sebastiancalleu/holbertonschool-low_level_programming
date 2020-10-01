#include "holberton.h"
/**
 * string_toupper - this function put all lowercase to uppercase.
 * @s: input string.
 * Return: string converted.
 */
char *string_toupper(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] >= 97 && s[a] <= 122)
{
s[a] = s[a] - 32;
}
}
return (s);
}
