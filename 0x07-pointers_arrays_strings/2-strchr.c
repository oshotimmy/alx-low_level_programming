#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: searched string
 * @c: first occurrence of the character
 *
 * Return: a pointer to the first occurence when c is found
 * NULL if the c character is not found
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
