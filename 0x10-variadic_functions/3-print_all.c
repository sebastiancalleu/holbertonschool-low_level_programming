#include "variadic_functions.h"
/**
 *pchar - print a char.
 *@c: list
 */
void pchar(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * pint - print a intiger
 * @i: list
 */
void pint(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * pfloat - print a float
 * @f: list
 */

void pfloat(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * pstring - print a string
 * @s: the list.
 */

void pstring(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - this function prints all.
 * @format: this is a format string.
 */
void print_all(const char * const format, ...)
{
	int a = 0, b = 0;
	char *s = "";
	print_data print [] = {
	{"c", pchar},
	{"i", pint},
	{"f", pfloat},
	{"s", pstring},
	{NULL, NULL}
};
	va_list all;

	va_start(all, format);
while (format && format[a])
{
	while (print[b].spec)
	{
		if (format[a] == *(print[b].spec))
		{
			printf("%s", s);
			print[b].func(all);
			s = ", ";
			break;
		}
		b++;
	}
	b = 0;
	a++;
}
printf("\n");
va_end(all);
}

