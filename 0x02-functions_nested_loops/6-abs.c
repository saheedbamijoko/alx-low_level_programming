#include "holberton.h"

/**
 * main - function that conpute absolute value of an integer
 * n: number as integer
 * Return: absolute value
 */

int int_abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return (-n);
}
else
{
return (0);
}
