#include "holberton.h"

/**
 * _abs - function that conpute absolute value of an integer
 * @n: number as integer
 * Return: absolute value
 */

int _abs(int n)
{
if (n > 0)
return (n);

else if (n < 0)
return (-n);

return (0);
}
