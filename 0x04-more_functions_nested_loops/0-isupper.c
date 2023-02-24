#include "main.h"

/**
 * _isupper - checks for uppercase characters.
 * @c: The character to be checkd
 * Return: 1 if character is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
