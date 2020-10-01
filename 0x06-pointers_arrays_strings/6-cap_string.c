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
if (((s[a] == '.') || (s[a] == '\n') || (s[a] == ' ') || (s[a] == '\t')
|| (s[a] == '{') || (s[a] == ';') || (s[a] == '?') || (s[a] == '}')
|| (s[a] == '(') || (s[a] == ')') || (s[a] == '!') || (s[a] == '"'))
&& s[a + 1] >= 97 && s[a + 1] <= 122)
{
s[a + 1] = s[a + 1] - 32;
}
}
return (s);
}
