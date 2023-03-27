#include "main.h"

/**
 * _printf - prints output
 * @format: the input format
 * Return: 0
 */
int _printf(const char *format, ...)
{
	type a[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37}
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
