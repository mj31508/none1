#include "holberton.h"
#include <stdio.h>

/**
 *main - write a function that brings together a string.
 *
 *Returns: a pointer to string dest.
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *p;

	p = cap_string(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
