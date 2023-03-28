#include "main.h"
/**
 * str_len - string length
 * @s: string
 * Return: length
 */
int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * print_int - prints digit
 * @n: number to be printed
 * Return: length
 */
int print_int(int n)
{
	int x, i = 0, y;

	if (n < 0)
	{
		i += _putchar('-');
		n = n * (-1);
	}
	x = n % 10;
	y = n / 10;
	if (y == 0)
	{
		i = _putchar(x + '0');
		return (i);
	}
	i = print_int(y);
	i++;
	_putchar(x + '0');
	return (i);
}
