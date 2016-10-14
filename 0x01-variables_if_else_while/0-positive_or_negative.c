#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Whatever
 *
 *
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("Then %d is positive\n", n);
	}
	if (n == 0)
	{
		printf("Then the %d is zero\n", n);
	}
	if (n < 0)
	{
		printf("Then the %d is negative\n", n);
	}
	return (0);
}
