#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase,
 * followed by a new line.Print all the letters except q and
 * eYou can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main functionYou
 * can only use putchar twice in your code
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
