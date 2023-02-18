#include <stdio.h>
 /**
  * main - Entry point
  *  Return: Always 0 (Success)
  */

int main(void)
{
	int c;
	int d = 0;

	while (d < 0)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar((c % 10) + '0');
				putchar((d % 10) + '0');
				
				else if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}

		d++
	}
	putchar('\n');
	return (0);
}
