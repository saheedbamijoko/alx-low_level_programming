#include "holberton.h"

/**
 * _isalpha - check for alphabet characters
 * @c: characeter to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');

}
