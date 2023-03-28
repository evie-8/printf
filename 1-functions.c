#include "main.h"
/**
 * print_digit - prints in base 10
 * @list: contains arguments
 * Return: length
 */
int print_digit(va_list list)
{
	int x = va_arg(list, int);
	int i = print_int(x);

	return (i);
}
/**
 * pick_func - chooses the right function
 * @c: character
 * Return: int of function choosen
 */
int (*pick_func(char c))(va_list list)
{
	int i;
	print_t prin[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_digit},
		{"i", print_digit},
		{"%", print_perc},
		{"r", print_rev},
		{NULL, NULL}
	};

	for (i = 0; prin[i].p != NULL; i++)
	{
		if (prin[i].p[0] == c)
			return (prin[i].func);
	}
	return (NULL);
}
