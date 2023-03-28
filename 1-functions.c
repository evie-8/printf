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
 * rot_13 - prints string encoded in rot13
 * @list: contains arguments
 * Return: length
 */
int rot_13(va_list list)
{
	char *s = va_arg(list, char *), *origin, *_rot13;
	int i, j;

	origin = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	_rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; origin[j] != '\0'; j++)
		{
			if (s[i] == origin[j])
			{
				_putchar(_rot13[j]);
				break;
			}
		}
		if (!origin[j])
			_putchar(s[i]);
	}
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
		{"R", rot_13},
		{"p", print_address},
		{"b", to_binary},
		{"x", hexa_lower},
		{"X", hexa_upper},
		{"o", octal},
		{"u", _unsigned_int},
		{NULL, NULL}
	};

	for (i = 0; prin[i].p != NULL; i++)
	{
		if (prin[i].p[0] == c)
			return (prin[i].func);
	}
	return (NULL);
}

/**
 * print_address - prints address
 * @list: contains arguments
 * Return: length
 */
int print_address(va_list list)
{
	char *s = "(nil)";
	int a, i;
	void *pointer;
	long int address;

	pointer = va_arg(list, void *);
	if (pointer == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	address = (unsigned long int)pointer;
	_putchar('0');
	_putchar('x');
	a = hex_low(address);
	return (a + 2);
}
/**
 * to_binary - converts to binary
 * @list: contains arguments
 * Return: length
 */
int to_binary(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	int y;

	y = binary(x);
	return (y);
}
