#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase,
 * followed by a new line.Print all the letters except q and
 * eYou can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main functionYou
 * can only use putchar twice in your code
 * Returnv Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
