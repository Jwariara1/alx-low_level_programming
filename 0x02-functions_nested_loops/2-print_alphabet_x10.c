#include "main.h"
/**
 * main - a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line
 * Description: the function uses loop to operate
 * Return: no return
 */
void print_alphabet_x10(void)
{
int counter = 0;
int letter;
while (counter++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar(10);
}
}
