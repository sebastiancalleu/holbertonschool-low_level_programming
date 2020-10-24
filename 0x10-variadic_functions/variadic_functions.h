#ifndef VARFUNC_H
#define VARFUNC_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int , ...);
void print_all(const char * const format, ...);
#endif
