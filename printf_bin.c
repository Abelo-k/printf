#include "main.h"

/**
 * printf_bin - prints binary
 * @list: argument
 *
 * Return: number of int
 */
int printf_bin(va_list list)
{
	int flag = 0, count = 0, i, a = 1, b;
	unsigned int num = var_arg(list, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
