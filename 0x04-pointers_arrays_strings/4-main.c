#include "holberton.h"

/**
 * main - reversing a string
 *
 *@s: s is a pointer
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}
