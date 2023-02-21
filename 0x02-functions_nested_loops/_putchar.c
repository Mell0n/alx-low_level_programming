#include "main.h"
#include <unistd.h>
/**
 * _putchar - Write and print c character
 * @c: the character to print
 *
 * Return: On success 1
 * error: set , return: -1
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
