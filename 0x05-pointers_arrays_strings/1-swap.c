#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - function that swap the value of two integers
 * @a: value to be evaluated
 * @b: value to be evaluated
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int x = *a;

*a = *b;
*b = x;
}
