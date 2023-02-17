#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* group job */
/* function main whit betty */
/**
 * main - Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* the code will be here */
	m = n % 10;
	if (m > 5)
		printf("last digit of %d is %d and is greatre than 5\n", n, m);
	if (m == 0)
		printf("last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
