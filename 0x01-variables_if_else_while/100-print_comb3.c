#include <stdio.h>
#include <stdlib.h>
/**
 * main - maine block
 * Description write a program that print all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * 01 and 10 are considered the same combination the two digits 0 and 1
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);
				
				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
