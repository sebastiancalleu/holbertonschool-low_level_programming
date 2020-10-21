#include "function_pointers.h"
/**
 * print_name - this print a name through a function pointer.
 * @name: the name to print.
 * @f: the function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
