#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - calculates the length of a string.
 *@s: pointer to the array character.
 *
 *Return: return i
 */
int main(void)
{
	char *str;
	int len;

	str = "Holberton!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
