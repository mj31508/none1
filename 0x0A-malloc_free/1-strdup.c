#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: a given string
 * Return: the length of the string
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

char *_strdup(char *str)
{
	int len;
	char *s;

	if (!str || !*str)
		return (NULL);
	len = _strlen(str);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	while (--len >= 0)
	{
		s[len] = str[len];
	}
	return (s);
}
