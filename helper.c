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
	int i = 0;
	unsigned int num;

	num = n;
	if (n < 0)
	{
		i += _putchar('-');
		num = -num;
	}
	if (num == 0)
	{
		i += _putchar('0');
		return (i);
	}
	if (num / 10)
		i += print_int(num / 10);
	i += _putchar(num % 10 + '0');
	return (i);
}
