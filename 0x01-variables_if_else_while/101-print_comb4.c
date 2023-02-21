#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int ym;
	int e;
	int w;

	for (w = 0 ; w != 8 ; w++)
	{
		for (m = w + 1 ; m != 9 ; m++)
		{
			e = m + 1;
			do {
				putchar('0' + w);
				putchar('0' + m);
				putchar('0' + e);
				if (w != 7)
				{
					putchar(',');
					putchar(32);
				}
				e++;
			} while (e != 10);
		}
	}
	putchar('\n');
	return (0);
}
