#include "holberton.h"

/**
 * main - check for lowercase character
 * @c: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
