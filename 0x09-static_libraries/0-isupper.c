#include <stdio.h>
#include "holberton.h"

/**
 * _isupper - checks for upper and lower case
 * @c: varialble text that accept value
 * Return: Always 0.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
