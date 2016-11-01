#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointer variable to a string
 * @accept: letter(s) to be located
 * Return: the number of "accepted" located
 */
unsigned int _strspn(char *s, char *accept)
{
  char *s = "hello, world";
  char *f = "oleh";
  unsigned int n;

  n = _strspn(s, f);
  printf("%u\n", n);
  return (0);
}
