#include <stdarg.h>
#include "main.h"
#include <stddef.h>
/**
 * _printf - emulates printf
 * @format: string passed
 * Return: number of characters in string
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	char *s;
	va_list args;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
				case 'c':
				_putchar((char)va_arg(args, int));
				i++;
				j++;
				break;
				case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(null)";
				j += prints_string(s);
				i++;
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
