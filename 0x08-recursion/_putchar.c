#include <unistd.h>
/**
 * _putchar - this function send the character to the standard output
 *
 * Return: be 1.
 * Error: *1
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
