#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - calculates and returns the length of a string
 * @str: pointer
 *
 * Return: the string's length
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
	{
		++i;
	}
	return (i);
}
/**
 * _strcpy - uses loops and _strlen to cat two strings
 *
 * @src: gets copied to dest
 * @dest: becomes the two strings combined
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}
/**
 * argstostr - concatenates and prints strings from argv
 * @ac: argc in clever disguise
 * @av: argv[] in clever disguise
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i;
	int len;
	char *s;
	int pos;

	if (!ac || !av)
		return (NULL);
	len = 0;
	i = 0;
	while (i < ac)
	{
		len += _strlen(av[i]) + 1;
		i++;
	}
	len++;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
	{
		return (NULL);
	}
	pos = 0;
	i = 0;
	while (i < ac)
	{
		_strcpy(s + pos, av[i]);
		s[pos + _strlen(av[i])] = '\n';
		s[pos + _strlen(av[i]) + 1] = '\0';
		pos += _strlen(av[i]) + 1;
		i++;
	}
	return (s);
}
