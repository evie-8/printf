#include <stdarg.h>
#include "main.h"
/**
 * _printf - emulates printf
 * @format: string passed
 * Return: number of characters in string
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	char c, *s;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
				case 'c':
				c = (char)va_arg(args, int);
				_putchar(c);
				i++;
				j++;
				break;
				case 's':
				s = va_arg(args, char *);
				prints_string(s);
				i++;
				j += len_str(s);
				break;
				case '%':
				_putchar('%');
				i++;
				j++;
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
			j++;
		}
	}
	va_end(args);
	return (j);
}
int main(void)
{
	int t = _printf("life is short");
	prints_int(t);
	return (0);
}
