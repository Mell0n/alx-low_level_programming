#include "main.h"
/**
 * _islower - Checks if a characters is lowercase
 * @c: the character
 * Return: 1 if lettre is a lowercase, 0 if is not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
