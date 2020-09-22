#include <stdio.h>
/**
 * main -this function display the fibo.
 *
 * Return: is 0
 */
int main(void)
{
int c;
long a, b, d;
a = 1;
b = 2;
printf("%ld, ", a);
for (c = 0; c <= 48; c++)
{
d = a + b;
a = b;
b = d;
printf("%ld", a);
if (c != 48)
{
printf(", ");
}
}
printf("\n");
return (0);
}
