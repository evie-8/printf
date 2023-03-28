#include "main.h"
/**
 * _unsigned_int - prints number in unsigned format
 * @list: contains arguments
 * Return: length
 */
int _unsigned_int(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	int y;

	y = _unsign(x);
	return (y);
}

/**
 * S_format - print hexadecimal for value that is > 0 && < 32 or > 127
 * @list: contains arguments
 * Return: Length
 */
int S_format(va_list list)
{
	char *s = va_arg(list, char *), *str;
	int i, count = 0;

	str = "(null)";
	if (s == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);
	}

	for (i = 0; s[i] != '\0'; i++, count++)
	{
		if ((s[i] > 0 && s[i] < 32) || (s[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			count += 2;
			count += hex_upper(s[i]);
		}
		else
		{
			_putchar(s[i]);
		}
	}
	return (count);
}
