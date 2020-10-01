#include "holberton.h"
/**
 * cap_string - this function capitalize a string.
 * @s: input sring.
 * Return: string result.
 */
char *cap_string(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{
if (((s[a - 1] == '.') || (s[a - 1] == '\n') || (s[a - 1] == ' ')
|| (s[a - 1] == '\t') || (s[a - 1] == '{') || (s[a - 1] == ';')
|| (s[a - 1] == '?') || (s[a - 1] == '}') || (s[a - 1] == '(')
|| (s[a - 1] == ')') || (s[a - 1] == '!') || (s[a - 1] == '"')
|| (s[a - 1] == ',') || (s[a] == s[0]))
&& s[a] >= 97 && s[a] <= 122)
{
s[a] = s[a] - 32;
}
}
return (s);
}
