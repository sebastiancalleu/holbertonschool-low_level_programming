#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: input variable
 *
 */
void rev_string(char *s)
{
int i, j, k, m;
char rev[1000];
for (i = 0; s[i] != '\0'; i++)
{
k = i;
}
for (j = 0; j <= i; j++)
{
rev[j] = s[k];
k--;
}
for (m = 0; m <= i; m++)
{
s[m] = rev[m];
}
}
