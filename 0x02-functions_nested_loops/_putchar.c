#include "main.h"
#include <unistd.h>
/**
 * main - Write and print c character
 * Return: On success 1
 * error: set , return: -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
