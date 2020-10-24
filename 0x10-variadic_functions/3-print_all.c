#include "variadic_functions.h"
/**
 * print_all - this function prints all.
 * @format: this is a format string.
 */
void print_all(const char * const format, ...)
{
	int  b = 0;
	char *s;

	va_list all;

	va_start(all, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[b])
	{
		switch (format[b])
		{
		case 'c':
			printf("%c", (char) va_arg(all, int));
			break;
		case 'i':
			printf("%d", va_arg(all, int));
			break;
		case 'f':
			printf("%f", va_arg(all, double));
			break;
		case 's':
			s = va_arg(all, char *);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
			break;
		}
		if ((format[b] == 's' || format[b] == 'i' || format[b] == 'f' ||
		     format[b] == 'c') && format[b + 1] != '\0')
			printf(", ");
		b++;
	}
	va_end(all);
	printf("\n");
}
