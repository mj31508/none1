#include "holberton.h"

/**
 * 
 * print_numbers - write a function that prints o through 9.
 * Return: void
 */
void print_numbers(void)
{
 int  i = 0;
    while (i <= 10)
      {
	_putchar (i + '0');
	i++;
      }
    _putchar ('\n');
}
