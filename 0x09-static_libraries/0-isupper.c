#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: check char
 * return: 1 if it's supper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return(1);
	else
		return(0);
}

