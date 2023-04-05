#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 *
 * @b: constant byte, also memory area pointer
 *
 * @n: bytes of the  memory area as pointed by @s
 *
 * @s: with the constant byte @b
 *
 * Return: a pointer to @s
*/
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	_putchar("\n");
}
