#include <stdio.h>
/**
 * main - oh my good 0 t0 99
 * Return: 0
 */
int main(void)
{
	int f;
	int r;
	int i;

	for (f = 0 ; f < 10 ; f++)
	{
		for (r = 0 ; r < 10 ; r++)
		{
				for (i = 0 ; i < 10 ; i++)
				{
					putchar('0' + f);
					putchar('0' + r);
					putchar('0' + i);
					if (!(f == 9 && r == 8))
					{
						putchar(',');
						putchar(32);
					}
					i++;
				}
		}
	}
	putchar('\n');
	return (0);
}
