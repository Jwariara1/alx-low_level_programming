#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: string to reverse
 * Return : 1 it it is, 0 if it is not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string to calculate it's length
 * Return: Legth of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the characters recursively for the palindrome
 * @s: string to check
 * @i: interator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
if (*(s + 1) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}
