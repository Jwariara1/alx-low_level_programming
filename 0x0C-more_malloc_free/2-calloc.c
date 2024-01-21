#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc - function allocates memory for an array
 *  of nmemb elements of size bytes each
 *  and returns a pointer to the allocated memory
 *  @nmemb: number of elements in he array
 *  @size: size of each lement in bytes
 *  Return: A pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *block;
unsigned int i;
if (nmemb == 0 || size == 0)
	return (NULL);
block = malloc(nmemb * size);
if (block != NULL)
{
for (i = 0; i < (nmemb * size); i++)
	block[i] = 0;
return (block);
}
else
return (NULL);
}

