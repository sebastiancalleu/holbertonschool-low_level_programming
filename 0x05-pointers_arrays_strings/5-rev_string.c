#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: input variable
 *
 */
void rev_string(char *s)
{
int i, j, k;
char cop[1000];
k = 0;
for (i = 0; s[i] != '\0'; i++)
{
cop[i] = s[i];
}
for (j = i - 1; j >= 0; j--)
{
s[j] = cop[k];
k++;
}
}
