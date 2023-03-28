#include "main.h"
/**
 * _printf - emulates printf function
 * @format: string
 * Return: string length
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, i = -1;
	int (*f)(va_list);

	va_start(list, format);
		if (format != NULL)
		{
			i = 0;
			for (; format[count] != '\0'; i++, count++)
			{
				if (format[count] != '%')
					_putchar(format[count]);
				else if (format[count] == '%' && format[count + 1] == '\0')
					return (-1);
				else if (format[count] == '%' && format[count + 1] != '\0')
				{
					f = pick_func(format[count + 1]);
					if (f == NULL)
						_putchar(format[count]);
					else
					{
						i = (i + f(list)) - 1;
						count++;
					}
				}
			}
		}
		va_end(list);
		return (i);
}
