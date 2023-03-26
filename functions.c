#include <unistd.h>
#include "main.h"
/**
 * _putchar - output a character
 * @c: character to be printed
 * Return: ASCII value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * prints_string - prints a string
 * @str: string to be printed
 */
void prints_string(char *str)
{
	if (*str == '\0')
		return;
	_putchar(*str);
	prints_string(str + 1);
}
/**
 * prints_int - prints string
 * @n: number
 */
void prints_int(int n)
{
	int x, y;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	x = n % 10;
	y = n / 10;
	if (y == 0)
	{
		_putchar(x + '0');
		return;
	}
	prints_int(y);
	_putchar(x + '0');
}
/**
 * len_str - length of string
 * @s: string
 * Return: length
 */
int len_str(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
