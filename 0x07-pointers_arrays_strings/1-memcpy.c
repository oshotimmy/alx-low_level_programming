#include "main.h"

/**
 * _memcpy - function copies a memory area
 * @dest: memory area where you copy to
 * @src: memory area where you copy from
 * @n: function copies number of bytes
 *
 * Return: pointer to memory copied area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
