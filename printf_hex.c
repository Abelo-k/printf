#include "main.h"

/**
 * printf_hex: to print hexa decimal
 * @val: value
 */

 int printf_hex(va_list val)
{
	_putchar(val % 16);
	return (0);
}
