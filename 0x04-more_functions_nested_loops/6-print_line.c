#include "holberton.h"

/**
 * print_line - write a function that draws a straight line in the terminal
 * @n: number of characters to draw
 */

void print_line(int n)
{
int times = n;

for (times = n; times > 0; times--)
_putchar('_');
_putchar'\n');
}
