#include "main.h"

/**
 * _printf - prints output
 * @format: the input format
 * Return: 0
 */
int _printf(const char *format, ...)
{
	_type a[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37}, {"%i", printf_int},
		{"%d", printf_dec}, {"%r", printf_srev},
		{"%R", printf_rot13}, {"%b", printf_bin},
		{"%u", printf_unsigned}, {"%o", printf_oct},
		{"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	va_list list;
	int i = 0, j, len = 0;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (a[j].id[0] == format[i] && a[j].id[1] == format[i + 1])
			{
				len += a[j].f(list);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(list);
	return (len);
}
