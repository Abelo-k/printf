#include "main.h"
/**
 * _strlen - prints length of a string
 * @s: string
 *
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
/**
 * _strlenc - prints length of a string for constant char
 * @s: string
 *
 * Return: count
 */
int _strlenc(const char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
