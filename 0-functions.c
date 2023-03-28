#include "main.h"
/**
 * _putchar - prints a character
 * @c: character to be printed
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints a character
 * @list: contains arguments
 * Return: length
 */
int print_char(va_list list)
{
	int c = va_arg(list, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - prints string
 * @list: contains arguments
 * Return: length
 */
int print_string(va_list list)
{
	int i;
	char *c = va_arg(list, char *);

	if (c == NULL)
		c = "(null)";
	for (i = 0; c[i] != '\0'; i++)
		_putchar(c[i]);
	return (i);
}

/**
 * print_perc - prints %
 * @list: contains arguments
 * Return: length
 */
int print_perc(va_list list)
{
	(void)list;
	_putchar('%');
	return (1);
}

/**
 * print_rev - reverse string
 * @list: contains arguments
 * Return: length
 */
int print_rev(va_list list)
{
	char *s = va_arg(list, char *);
	int i = str_len(s);

	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	return (0);
}
