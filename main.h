#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_perc(va_list);
int print_digit(va_list);
int _putchar(char c);
int print_rev(va_list);
int str_len(char *);
int print_int(int n);
int (*pick_func(char c))(va_list);
int rot_13(va_list);
int hex_low(unsigned long int);
int print_address(va_list);
int to_binary(va_list);
int binary(unsigned int);
int hex_upper(unsigned long int);
int hexa_upper(va_list);
int hexa_lower(va_list);
int octal(va_list);
int octal1(unsigned int);
int _unsign(unsigned int);
int _unsigned_int(va_list);

/**
 * struct prints - struct
 * @p: pointer
 * @func: function pointer
 */
typedef struct prints
{
	char *p;
	int (*func)(va_list);
} print_t;

#endif
