#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @r: number to be targeted
 * Return: return 0
 */
int print_last_digit(int r)
{
int lastdigit = n % 10;
if (lastdigit < 0)
lastdigit *= -1;
_putchar (lastdigit + '0');
return (lastdigit);
}
