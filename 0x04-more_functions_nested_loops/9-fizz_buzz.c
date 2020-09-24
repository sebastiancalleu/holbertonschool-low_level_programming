#include <stdio.h>
/**
 * main - this function count 0 to 1 and print fizz and buzz.
 *
 * Return: is 0
 */
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if ((a % 5 == 0) && (a % 3 == 0))
{
printf("FizzBuzz");
}
else
{
if (a % 3 == 0)
{
printf("Fizz");
}
else
{
if (a % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", a);
}
}
}
printf(" ");
}
printf("\n");
return (0);
}
