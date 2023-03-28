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
