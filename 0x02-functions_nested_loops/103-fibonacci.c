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
for (c = 0; c <= 31; c++)
{
if ((a < 4000000) && (a % 2 == 0))
{
e = e + a;
}
d = a + b;
a = b;
b = d;
}
printf("%ld", e);
printf("\n");
return (0);
}
