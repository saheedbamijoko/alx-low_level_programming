#include "holberton.h"

/**
 * main - print sign of a number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */

int print_sign(int n);
int main(void)

{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 1)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
_putchar('\n');
}
