#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
	exit(98);
return (ptr);
}
