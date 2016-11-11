#include <stdlib.h>

/**
 * malloc_checked - function for the unsigned int
 *
 *@b: interger argument
 * Return: return a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *sampptr;

	sampptr = malloc(b);

	if (sampptr == NULL)
		exit(98);
	else
		return (sampptr);

}
