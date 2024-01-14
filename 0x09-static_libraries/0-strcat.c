#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int j;
	int k;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	j = 0;
	while (src[k] != '\0')
	{
		dest[k] = src[j];
		j++;
		k++;
	}

	dest[j] = '\0';
	return (dest);
}
