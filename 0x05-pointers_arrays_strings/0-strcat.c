#include "holberton.h"

/**
 * _strcat - cat two strings
 * @dest: destination
 * @src: 2nd file add to dest
 * Return: lol
 */

char *_strcat(char *dest, char *src)
{
	char *lol;

	lol = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (lol);
}
