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
