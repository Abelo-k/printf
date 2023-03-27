#include "main.h"

/**
 * printf_string - prints string
 * @val: argument
 *
 * Return: length of str
 */
int printf_string(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; len++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = o; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
