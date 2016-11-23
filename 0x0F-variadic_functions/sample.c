#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list mylist;
	int i, sum;

	va_start(my_list, n);

	while (i = 0, i < n, i++)
	{
		if (n == 0)
		{
			return 0;
		}

		sum += va_arg(mylist, int);
	}

	va_end (mylist);
	return sum;
}
