#include "holberton.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination pointer variable
 * @src: source pointer variable
 * @n: number of bytes to be copied
 * Return: destination
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
  unsigned int i;

  i = 0;
  while (i < size)
    {
      if (i % 10)
        {
	  printf(" ");
        }
      if (!(i % 10) && i)
        {
	  printf("\n");
        }
      printf("0x%02x", buffer[i]);
      i++;
    }
  printf("\n");
}
