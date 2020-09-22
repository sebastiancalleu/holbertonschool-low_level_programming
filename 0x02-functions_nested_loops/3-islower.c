#include "holberton.h"
/**
* _islower - this function return 1 if the int is a lowercase letter
*
* @c: input variable.
* Return: 1 for lowercase.
*/
int _islower(int c)
{
if  ((c >= 'a') && (c <= 'z'))
return (1);
return (0);
}
