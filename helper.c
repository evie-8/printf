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

/**
 * hex_low - prints number in hexadecimal in lower case
 * @n: number
 * Return: length
 */
int hex_low(unsigned long int n)
{
	long int i, *arr, count = 0;
	unsigned long int num;

	num = n;
	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}
	count++;
	arr = malloc(sizeof(long int) * count);
	if (arr == NULL)
		return (0);
	for (i = 0; i < count; i++)
	{
		arr[i] = num % 16;
		num = num / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
