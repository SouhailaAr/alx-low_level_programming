#include "main.h"
/**
 * _memset - function that fills memory with a constant @b byte
 * @s:first value with the constant byte @b
 * @b:second value of the memory area
 * @n:third value of the bytes of the memory area
 *
 *
 * Return: character that hes the result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
