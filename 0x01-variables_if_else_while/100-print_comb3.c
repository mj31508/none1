#include <stdio.h>

/**
 * main - something
 * Return: 0
 */

int main(void)
{
	int a, b;

	a = '0';
	b = '1';

	while (a <= '8')
	{
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (a != '8' || b != '9')
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
