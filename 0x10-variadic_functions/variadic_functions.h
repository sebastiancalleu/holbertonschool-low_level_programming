#ifndef VARFUNC_H
#define VARFUNC_H
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
/**
 * struct print - struct
 * @spec: the specification.
 * @func: the function.
 */
typedef struct print
{
	char *spec;
	void (*func)(va_list);
} print_data;
#endif
