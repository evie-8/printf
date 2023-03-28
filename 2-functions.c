#include "main.h"

/**
 * octal - change base 8
 * @list: contains arguments
 * Return: length
 */
int octal(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	int y;

	y = octal1(x);
	return (y);
}

/**
 * hexa_upper - prints number in upper hexadecimal
 * @list: contains arguments
 * Return: length
 */
int hexa_upper(va_list list)
{
	unsigned long int x = va_arg(list, unsigned long int);
	int y;

	y = hex_upper(x);
	return (y);
}

/**
 * hexa_lower - prints number in upper hexadecimal
 * @list: contains arguments
 * Return: length
 */
int hexa_lower(va_list list)
{
	unsigned long int x = va_arg(list, unsigned long int);
	int y;

	y = hex_low(x);
	return (y);
}
/**
 * octal1 - convert to base 8
 * @n: number
 * Return: length
 */
int octal1(unsigned int n)
{
	int i, *arr, count = 0;
	unsigned int num;

	num = n;
	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (0);
	for (i = 0; i < count; i++)
	{
		arr[i] = num % 8;
		num = num / 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
/**
 * _unsign - convert to base 8
 * @n: number
 * Return: length
 */
int _unsign(unsigned int n)
{
	int i, *arr, count = 0;
	unsigned int num;

	num = n;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	count++;
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (0);
	for (i = 0; i < count; i++)
	{
		arr[i] = num % 10;
		num = num / 10;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
