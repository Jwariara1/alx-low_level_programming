#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: character to be verified
 * Return: return 0 or 1
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
