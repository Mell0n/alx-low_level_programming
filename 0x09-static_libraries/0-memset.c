#include "main.h"
/**
 * _memset - fill a block of memory with value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with n bytes new values
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (i = 0; n > i; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
