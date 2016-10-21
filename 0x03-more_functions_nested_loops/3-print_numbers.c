#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * print c - write a function that prints o through 9.
 * Return: Always 0.
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
