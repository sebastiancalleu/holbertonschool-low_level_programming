#ifndef HOLBERTON_H
#define HOLBERTON_H

unsigned int binary_to_uint(const char *);
void print_binary(unsigned long int);
int _putchar(char);
int get_bit(unsigned long int, unsigned int);
int set_bit(unsigned long int *, unsigned int);
int clear_bit(unsigned long int *, unsigned int);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
#endif
