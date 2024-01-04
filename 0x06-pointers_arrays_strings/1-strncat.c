#include "main.h"
/**
 * _strncat - a function that concatenates n
 * number of src to dest
 * @dest: destination
 * @src: source
 * @n: number of characters to concatenate
 * Return: return to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
