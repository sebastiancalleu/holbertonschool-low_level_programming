#include <stdio.h>
/**
 * main -this function display the fibo.
 *
 * Return: is 0
 */
int main(void)
{
int c;
long a, b, d, e;
a = 1;
b = 2;
e = 0;
for (c = 0; c <= 48; c++)
{
d = a + b;
a = b;
b = d;
if (a < 4000000)
{
e = e + a;
}
}
printf("%ld", e);
printf("\n");
return (0);
}
