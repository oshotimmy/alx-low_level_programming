#include "main.h"

/**
 * _memset - fills memory with connstant byte
 * @s: bytes of the memory area
 * @b: the constant byte
 * @n: function fills the first
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)

{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
