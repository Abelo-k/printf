#include "main.h"
#include <unistd.h>

/**
 * _putchar - output functio
 * @c: char
 *
 * Return: @c (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
