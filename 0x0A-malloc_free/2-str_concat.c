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
/**
 * _strcpy - copies and returns a string
 *
 * @dest: destination string, output
 * @src: string to be copied
 *
 * Return: dest
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
 * str_concat - concatenates two strings, if space suffices
 *
 * @s1: first string
 * @s2: second string
 * Return: pointer to beginning of combined string
 */
char *str_concat(char *s1, char *s2)
{
	int l;
	char *s;

	l = _strlen(s1) + _strlen(s2) + 1;
	s = malloc(l * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	_strcpy(s, s1);
	_strcpy(s + _strlen(s1), s2);
	return (s);
}
